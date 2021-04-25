#include "selectiondialog.h"
#include "ui_selectiondialog.h"

selectionDialog::selectionDialog(QString selectedCountry, std::vector<std::vector<QString>> &listOfCountries, QWidget *parent) :
    QDialog(parent),
    allCountries(listOfCountries),
    ui(new Ui::selectionDialog)
{
    ui->setupUi(this);

    ui->selectedCountryLineEdit->setText(selectedCountry);

    for (std::vector<QString> country : listOfCountries) {
        if (country.at(0) != selectedCountry) {
            ui->comboBox->addItem(country.at(0));
        } else {
            originalCountry = country;
        }
    }
}

selectionDialog::~selectionDialog()
{
    delete ui;
}

void selectionDialog::on_buttonBox_accepted()
{

    ComparisonDialog *comparison = new ComparisonDialog(originalCountry, allCountries.at(selectionIndex));
    qDebug() << originalCountry.at(0) << " " << originalCountry.at(1);
    Qt::WindowFlags flags(Qt::WindowTitleHint);
    comparison->setWindowFlags(flags);
    comparison->setAttribute(Qt::WA_DeleteOnClose);
    comparison->setModal(true);
    comparison->exec();
}


void selectionDialog::on_comboBox_highlighted(int index)
{
    selectionIndex = index;
}
