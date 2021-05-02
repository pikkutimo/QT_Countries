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
    const QString COUNTRY = QObject::tr("Country: ");
    const QString CAPITAL = QObject::tr("Capital: ");
    const QString POPULATION = QObject::tr("Population: ");
    const QString AREA = QObject::tr("Area (square miles): ");
    const QString POP_DENSITY = QObject::tr("Population density per sq.mile: ");
    const QString CARATIO = QObject::tr("Coast/Area ratio: ");
    const QString MIGRATION = QObject::tr("Net migration: ");
    const QString INF_MORTALITY = QObject::tr("Infant mortality (per 1000 births): ");
    const QString GDP = QObject::tr("GDP ($ per capita): ");
    const QString LITERACY = QObject::tr("Literacy: ");
    const QString PHONES = QObject::tr("Phones (per 1000): ");
    const QString ARABLE = QObject::tr("Arable land: ");
    const QString CROPS = QObject::tr("Crops land: ");
    const QString OTHER = QObject::tr("Other: ");
    const QString BIRTHRATE = QObject::tr("Birthrate: ");
    const QString DEATHRATE = QObject::tr("Deathrate: ");
    const QString AGRICULTURE = QObject::tr("Agriculture: ");
    const QString INDUSTRY = QObject::tr("Industry: ");
    const QString SERVICE = QObject::tr("Service: ");

    attributesList = new QStringList();
    countryModel = new QStringListModel(*attributesList, NULL);

    // Seek out the selected country from the list and save its name into a variable
    QModelIndexList selectedIndexes(ui->listView->selectionModel()->selectedIndexes());
    QString countryToLook = selectedIndexes.at(0).data().toString();

    for (std::vector<QString> country : listOfCountries) {
        // Seek selected country and transfer its data into list
        if (country.at(0) == countryToLook) {
            attributesList->append(COUNTRY + country.at(0));
            attributesList->append(CAPITAL + country.at(1));
            attributesList->append(POPULATION + country.at(2));
            attributesList->append(AREA + country.at(3));
            attributesList->append(POP_DENSITY + country.at(4));
            attributesList->append(CARATIO + country.at(5));
            attributesList->append(MIGRATION + country.at(6));
            attributesList->append(INF_MORTALITY + country.at(7));
            attributesList->append(GDP + country.at(8));
            attributesList->append(LITERACY + country.at(9) + "%");
            attributesList->append(PHONES + country.at(10));
            attributesList->append(ARABLE + country.at(11) + "%");
            attributesList->append(CROPS + country.at(12) + "%");
            attributesList->append(OTHER + country.at(13) + "%");
            attributesList->append(BIRTHRATE + country.at(15));
            attributesList->append(DEATHRATE + country.at(16));
            attributesList->append(AGRICULTURE + country.at(17));
            attributesList->append(INDUSTRY + country.at(18));
            attributesList->append(SERVICE + country.at(19));
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

    const QString CONFIRMATION = QObject::tr("Are you sure you want to quit?");

    QMessageBox* box = new QMessageBox(QMessageBox::Question,
                       qApp->applicationName(),
                       CONFIRMATION,
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
    // Disable the select Button
    ui->pushButton->setEnabled(false);

    updateList();
}

void MainWindow::on_sortAlphabeticallyButton_clicked()
{
    std::sort(listOfCountries.begin(), listOfCountries.end(), sortByName);
    ui->pushButton->setEnabled(false);
    updateList();
}

void MainWindow::on_sortByAreaButton_clicked()
{
    std::sort(listOfCountries.begin(), listOfCountries.end(), sortByArea);
    ui->pushButton->setEnabled(false);
    updateList();
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    // If one country is selected, the comparison becomes possible and its
    // data is shown in the countryListView
    ui->pushButton->setEnabled(true);
    updateCountryAttributes();

}

void MainWindow::on_randomPushButton_clicked()
{
    int index = QRandomGenerator::global()->bounded(0,listOfCountries.size());
    QString name = listOfCountries.at(index).at(0);

    const QModelIndexList indexes = model->match(
                model->index(0, 0),
                Qt::DisplayRole,
                name,
                1,
                Qt::MatchExactly
                );

    if(indexes.size() > 0) {
        ui->listView->setCurrentIndex(indexes.at(0));
    }

    ui->pushButton->setEnabled(true);
    updateCountryAttributes();
}
