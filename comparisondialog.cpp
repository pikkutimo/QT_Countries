#include "comparisondialog.h"
#include "ui_comparisondialog.h"


ComparisonDialog::ComparisonDialog(std::vector<QString> originalCountry, std::vector<QString> countryToCompare, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComparisonDialog)
{
    // GUI
    ui->setupUi(this);
    this->setWindowTitle("Comparison");
    titlesList = new QStringList();
    originalList = new QStringList();
    comparisonList = new QStringList();
    titlesModel = new QStringListModel(*titlesList, NULL);
    originalModel = new QStringListModel(*originalList, NULL);
    comparisonModel = new QStringListModel(*comparisonList, NULL);

    fillTitles();

    ui->originalLabel->setText(originalCountry.at(0));

    // Read data to listView of the selected country
    for (QString item: originalCountry) {
        if (item!=originalCountry.at(0))
            originalList->append(item);
    }

    ui->comparisonLabel->setText(countryToCompare.at(0));

    // Read data to listView of the comparison country
    for (QString compareItem : countryToCompare) {
        if (compareItem!=countryToCompare.at(0))
            comparisonList->append(compareItem);
    }
    ui->itemsListView->setStyleSheet("background-color: transparent; border: none;");

    titlesModel->setStringList(*titlesList);
    originalModel->setStringList(*originalList);
    comparisonModel->setStringList(*comparisonList);

    ui->itemsListView->setModel(titlesModel);
    ui->originalListView->setModel(originalModel);
    ui->comparisonListView->setModel(comparisonModel);

    /*QString path = ":/img/flags/";
    QString filetype = ".png";

    QString originalPath = path + originalList->last() + filetype;
    QString comparisonPath = path + comparisonList->last() + filetype;*/

    QPixmap original(":/img/flags/ad.png");
    QPixmap comparison(":/img/flags/ae.png");

    originalImageLabel->setPixmap(original);
    originalImageLabel->setMask(original.mask());

    compareImageLabel->setPixmap(comparison);
    compareImageLabel->setMask(comparison.mask());

    originalImageLabel->show();
    compareImageLabel->show();
}

ComparisonDialog::~ComparisonDialog()
{
    delete ui;
}

void ComparisonDialog::fillTitles()
{
    // Since the csv doesn't contain these, let's add them here
    titlesList->append("Capital");
    titlesList->append("Population");
    titlesList->append("Area (square miles)");
    titlesList->append("Population density per sq.mile");
    titlesList->append("Coast/Area ratio");
    titlesList->append("Net migration");
    titlesList->append("Infant mortality (per 1000 births)");
    titlesList->append("GDP ($ per capita)");
    titlesList->append("Literacy (%)");
    titlesList->append("Phones (per 1000)");
    titlesList->append("Arable land(%)");
    titlesList->append("Crops land(%)");
    titlesList->append("Other (%)");
    titlesList->append("Climate");
    titlesList->append("Birthrate");
    titlesList->append("Deathrate");
    titlesList->append("Agriculture");
    titlesList->append("Industry");
    titlesList->append("Service");
    titlesList->append("Alpha-2 country code");

}

void ComparisonDialog::loadFlags()
{
    QString path = ":/img/flags/";
    QString filetype = ".png";

    QString originalPath = path + originalList->last() + filetype;
    QString comparisonPath = path + comparisonList->last() + filetype;

    QPixmap original(originalPath);
    QPixmap comparison(comparisonPath);

    originalImageLabel->setPixmap(original);
    originalImageLabel->setMask(original.mask());

    compareImageLabel->setPixmap(comparison);
    compareImageLabel->setMask(comparison.mask());
}

void ComparisonDialog::on_pushButton_clicked()
{
    this->reject();
}
