#include "comparisondialog.h"
#include "ui_comparisondialog.h"

ComparisonDialog::ComparisonDialog(std::vector<QString> originalCountry, std::vector<QString> countryToCompare, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComparisonDialog)
{
    ui->setupUi(this);
    originalList = new QStringList();
    comparisonList = new QStringList();
    originalModel = new QStringListModel(*originalList, NULL);
    comparisonModel = new QStringListModel(*comparisonList, NULL);

    for (QString item: originalCountry) {
        originalList->append(item);
    }

    for (QString compareItem : countryToCompare) {
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

