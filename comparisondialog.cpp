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
    for (QString &item: originalCountry) {
        if (item!=originalCountry.at(0))
            originalList->append(item);
    }

    ui->comparisonLabel->setText(countryToCompare.at(0));

    // Read data to listView of the comparison country
    for (QString &compareItem : countryToCompare) {
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

    loadFlags();
}

ComparisonDialog::~ComparisonDialog()
{
    delete ui;
}

void ComparisonDialog::fillTitles()
{
    const QString CAPITAL = QObject::tr("Capital");
    const QString POPULATION = QObject::tr("Population");
    const QString AREA = QObject::tr("Area (square miles)");
    const QString POP_DENSITY = QObject::tr("Population density per sq.mile");
    const QString CARATIO = QObject::tr("Coast/Area ratio");
    const QString MIGRATION = QObject::tr("Net migration");
    const QString INF_MORTALITY = QObject::tr("Infant mortality (per 1000 births)");
    const QString GDP = QObject::tr("GDP ($ per capita)");
    const QString LITERACY = QObject::tr("Literacy(%)");
    const QString PHONES = QObject::tr("Phones (per 1000)");
    const QString ARABLE = QObject::tr("Arable land(%)");
    const QString CROPS = QObject::tr("Crops land(%)");
    const QString OTHER = QObject::tr("Other (%)");
    const QString CLIMATE = QObject::tr("Climate");
    const QString BIRTHRATE = QObject::tr("Birthrate");
    const QString DEATHRATE = QObject::tr("Deathrate");
    const QString AGRICULTURE = QObject::tr("Agriculture");
    const QString INDUSTRY = QObject::tr("Industry");
    const QString SERVICE = QObject::tr("Service");
    const QString CCODE = QObject::tr("Alpha-2 country code");

    // Row titles
    titlesList->append(CAPITAL);
    titlesList->append(POPULATION);
    titlesList->append(AREA);
    titlesList->append(POP_DENSITY);
    titlesList->append(CARATIO);
    titlesList->append(MIGRATION);
    titlesList->append(INF_MORTALITY);
    titlesList->append(GDP);
    titlesList->append(LITERACY);
    titlesList->append(PHONES);
    titlesList->append(ARABLE);
    titlesList->append(CROPS);
    titlesList->append(OTHER);
    titlesList->append(CLIMATE);
    titlesList->append(BIRTHRATE);
    titlesList->append(DEATHRATE);
    titlesList->append(AGRICULTURE);
    titlesList->append(INDUSTRY);
    titlesList->append(SERVICE);
    titlesList->append(CCODE);

}

void ComparisonDialog::loadFlags()
{
    const QString path = ":/img/flags/";
    const QString filetype = ".png";

    QString originalPath = originalList->last();
    originalPath.prepend(path);
    originalPath.append(filetype);

    QString comparisonPath = comparisonList->last();
    comparisonPath.prepend(path);
    comparisonPath.append(filetype);

    QPixmap original(originalPath);
    QPixmap comparison(comparisonPath);

    ui->originalImageLabel->setPixmap(original);
    ui->originalImageLabel->setMask(original.mask());

    ui->compareImageLabel->setPixmap(comparison);
    ui->compareImageLabel->setMask(comparison.mask());

    ui->originalImageLabel->show();
    ui->compareImageLabel->show();
}

void ComparisonDialog::on_pushButton_clicked()
{
    this->reject();
}
