#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "loader.h"
#include "selectiondialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // GUI
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
    ui->sortAlphabeticallyButton->setChecked(true);
    ui->listView->setSelectionMode(QAbstractItemView::SingleSelection);
    list = new QStringList();
    model = new QStringListModel(*list, NULL);

    // Load the data
    listOfCountries = loader();

    // Transfer the country name into list to be used in the model
    for (std::vector<QString> country : listOfCountries) {
        list->append(country.at(0));
    }

    // Transform the list into model to be shown in ListView
    model->setStringList(*list);
    ui->listView->setModel(model);

    // Disable the selection mechanism from the ListView showing country specs
    ui->countryListView->setSelectionMode(QAbstractItemView::NoSelection);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// Sorting for the name, population and area
bool MainWindow::sortByPopulation(const std::vector<QString> &v1, const std::vector<QString> &v2)
{
    bool ok; // ok - variable for errors
    QString numberOne = v1.at(2);
    int firstNumber = numberOne.toInt(&ok);
    QString numberTwo = v2.at(2);
    int secondNumber = numberTwo.toInt(&ok);


    return firstNumber < secondNumber;
}

bool MainWindow::sortByArea(const std::vector<QString> &v1, const std::vector<QString> &v2)
{
    bool ok;
    QString numberOne = v1.at(3);
    int firstNumber = numberOne.toInt(&ok);
    QString numberTwo = v2.at(3);
    int secondNumber = numberTwo.toInt(&ok);


    return firstNumber < secondNumber;
}

bool MainWindow::sortByName(const std::vector<QString> &v1, const std::vector<QString> &v2)
{
    return v1.at(0) < v2.at(0);
}

// function to update the list after sorting it
void MainWindow::updateList()
{
    list = new QStringList();
    model = new QStringListModel(*list, NULL);

    for (std::vector<QString> country : listOfCountries) {
        list->append(country.at(0));
    }

    model->setStringList(*list);
    ui->listView->setModel(model);
}

// Function to display the selected countrys data in CountryListView
void MainWindow::updateCountryAttributes()
{
    attributesList = new QStringList();
    countryModel = new QStringListModel(*attributesList, NULL);

    // Seek out the selected country from the list and save its name into a variable
    QModelIndexList selectedIndexes(ui->listView->selectionModel()->selectedIndexes());
    QString countryToLook = selectedIndexes.at(0).data().toString();

    for (std::vector<QString> country : listOfCountries) {
        // Seek selected country and transfer its data into list
        if (country.at(0) == countryToLook) {
            attributesList->append("Country: " + country.at(0));
            attributesList->append("Capital: " + country.at(1));
            attributesList->append("Population: " + country.at(2));
            attributesList->append("Area (square miles): " + country.at(3));
            attributesList->append("Population density per sq.mile: " + country.at(4));
            attributesList->append("Coast/Area ratio: " + country.at(5));
            attributesList->append("Net migration: " + country.at(6));
            attributesList->append("Infant mortality (per 1000 births): " + country.at(7));
            attributesList->append("GDP ($ per capita): " + country.at(8));
            attributesList->append("Literacy: " + country.at(9) + "%");
            attributesList->append("Phones (per 1000): " + country.at(10));
            attributesList->append("Arable land: " + country.at(11) + "%");
            attributesList->append("Crops land: " + country.at(12) + "%");
            attributesList->append("Other: " + country.at(13) + "%");
            //attributesList->append("Climate: " + country.at(14));
            attributesList->append("Birthrate: " + country.at(15));
            attributesList->append("Deathrate: " + country.at(16));
            attributesList->append("Agriculture: " + country.at(17));
            attributesList->append("Industry: " + country.at(18));
            attributesList->append("Service: " + country.at(19));
            break;
        }
    }

    // Update the countryListView through model
    countryModel->setStringList(*attributesList);
    ui->countryListView->setModel(countryModel);


}

// The requested confirmation, no actual funtionality currently since all
// of the data is only read not written
void MainWindow::closeEvent(QCloseEvent *event)
{
    event->ignore();

    QMessageBox* box = new QMessageBox(QMessageBox::Question,
                       qApp->applicationName(),
                       "Are you sure you want to quit?",
                       QMessageBox::Yes | QMessageBox::No,
                       this);

    QObject::connect(box->button(QMessageBox::Yes), &QAbstractButton::clicked, qApp, &QApplication::quit);
    QObject::connect(box->button(QMessageBox::No), &QAbstractButton::clicked, box, &QObject::deleteLater);
    QObject::connect(qApp, &QApplication::aboutToQuit, box, &QObject::deleteLater);
    box->show();
}

void MainWindow::on_pushButton_clicked()
{
    // To bring up the selectiodialog, seek out the selected country
    QModelIndexList selectedIndexes(ui->listView->selectionModel()->selectedIndexes());
    QString country = selectedIndexes.at(0).data().toString();

    // Create a new custom Dialog, which receives the following parameters
    selectionDialog *dialog = new selectionDialog(country, listOfCountries);
    Qt::WindowFlags flags(Qt::WindowTitleHint);

    dialog->setWindowFlags(flags);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->setModal(true);
    dialog->exec();
}


void MainWindow::on_sortByPopulationButton_clicked()
{
    // Use std::sort through the data
    std::sort(listOfCountries.begin(), listOfCountries.end(), sortByPopulation);
    // Clear the listView of all countries
    countryModel->removeRows(0, countryModel->rowCount());
    // Disable the select Button
    ui->pushButton->setEnabled(false);

    updateList();
}

void MainWindow::on_sortAlphabeticallyButton_clicked()
{
    std::sort(listOfCountries.begin(), listOfCountries.end(), sortByName);
    countryModel->removeRows(0, countryModel->rowCount());
    ui->pushButton->setEnabled(false);
    updateList();
}

void MainWindow::on_sortByAreaButton_clicked()
{
    std::sort(listOfCountries.begin(), listOfCountries.end(), sortByArea);
    ui->pushButton->setEnabled(false);
    countryModel->removeRows(0, countryModel->rowCount());
    updateList();
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    // If one country is selected, the comparison becomes possible and its
    // data is shown in the countryListView
    ui->pushButton->setEnabled(true);
    updateCountryAttributes();

}
