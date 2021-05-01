#include "selectiondialog.h"
#include "ui_selectiondialog.h"

selectionDialog::selectionDialog(QString selectedCountry, std::vector<std::vector<QString>> &listOfCountries, QWidget *parent) :
    QDialog(parent),
    allCountries(listOfCountries),
    ui(new Ui::selectionDialog)
{
    // GUI
    ui->setupUi(this);
    this->setWindowTitle("Select Country to Compare");
    ui->selectedCountryLineEdit->setText(selectedCountry);

    // Transfer data to ComboBox
    int index = 0;
    for (std::vector<QString> country : allCountries) {
        if (country.at(0) != selectedCountry) {
            ui->comboBox->addItem(country.at(0));
            index++;
        } else {
            originalCountry = country;
            ui->comboBox->addItem(country.at(0));
            chosenIndex = index;
        }

    }

    // Make the previously selected country unselectable
    qobject_cast<QStandardItemModel*>(ui->comboBox->model())->item(chosenIndex)->setEnabled(false);
}

selectionDialog::~selectionDialog()
{
    delete ui;
}

void selectionDialog::on_buttonBox_accepted()
{
    // Create comparison Dialog
    ComparisonDialog *comparison = new ComparisonDialog(originalCountry, *comparisonCountry);
    Qt::WindowFlags flags(Qt::WindowTitleHint);
    comparison->setWindowFlags(flags);
    comparison->setAttribute(Qt::WA_DeleteOnClose);
    comparison->setModal(true);
    comparison->exec();
}


void selectionDialog::on_comboBox_highlighted(int index)
{
    selectionIndex = index;
    comparisonCountry = &allCountries.at(selectionIndex);
    qDebug() << comparisonCountry->at(0);
}

// Function to select country randomly from the comboBox
void selectionDialog::on_checkBox_toggled(bool checked)
{
    ui->comboBox->setDisabled(checked);

    if (!ui->comboBox->isEnabled()) {
        selectionIndex = QRandomGenerator::global()->bounded(0,allCountries.size());
    }
}
