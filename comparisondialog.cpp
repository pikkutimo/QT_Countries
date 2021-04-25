#include "comparisondialog.h"
#include "ui_comparisondialog.h"

ComparisonDialog::ComparisonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComparisonDialog)
{
    ui->setupUi(this);
    originalList = new QStringList();
    comparisonList = new QStringList();
    originalModel = new QStringListModel(*originalList, NULL);
    comparisonModel = new QStringListModel(*comparisonList, NULL);

    for (QString item: *originalCountry) {
        originalList->append(item);
    }

    for (QString compareItem : *comparisonCountry) {
        comparisonList->append(compareItem);
    }

    originalModel->setStringList(*originalList);
    comparisonModel->setStringList(*comparisonList);

    ui->originalListView->setModel(originalModel);
    ui->comparisonListView->setModel(comparisonModel);
}

ComparisonDialog::~ComparisonDialog()
{
    delete ui;
}

void ComparisonDialog::on_pushButton_clicked()
{
    this->reject();
}

void ComparisonDialog::reveiveVector(std::vector<QString> &original, std::vector<QString> &comparison)
{
    *originalCountry = original;
    *comparisonCountry = comparison;
}


/*ui->setupUi(this);
    ui->listView->setSelectionMode(QAbstractItemView::SingleSelection);
    list = new QStringList();
    model = new QStringListModel(*list, NULL);

    listOfCountries = loader();


    for (std::vector<QString> country : listOfCountries) {
        list->append(country.at(0));
    }

    model->setStringList(*list);
    ui->listView->setModel(model);*/
