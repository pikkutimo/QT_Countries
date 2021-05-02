#include "selectiondialog.h"
#include "ui_selectiondialog.h"

selectionDialog::selectionDialog(QString selectedCountry, std::vector<std::vector<QString>> &listOfCountries, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectionDialog),
    allCountries(listOfCountries),
    selectedCountry(selectedCountry),
    maxPopulation(0),
    minPopulation(1000000),
    populationLimit(0)
{
    // GUI
    ui->setupUi(this);
    this->setWindowTitle("Select Country to Compare");
    ui->selectedCountryLineEdit->setText(selectedCountry);

    // Transfer data to ComboBox
    int countryPopulation = 0;
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

        countryPopulation = country.at(2).toInt();
        checkPopulationValues(countryPopulation);

    }

    updateSlider();

    // Make the previously selected country unselectable
    qobject_cast<QStandardItemModel*>(ui->comboBox->model())->item(chosenIndex)->setEnabled(false);
}

selectionDialog::~selectionDialog()
{
    delete ui;
}

void selectionDialog::on_buttonBox_accepted()
{
    std::vector<QString> comparisonCountry = allCountries[selectionIndex];
    // Create comparison Dialog
    ComparisonDialog *comparison = new ComparisonDialog(originalCountry, comparisonCountry);
    Qt::WindowFlags flags(Qt::WindowTitleHint);
    comparison->setWindowFlags(flags);
    comparison->setAttribute(Qt::WA_DeleteOnClose);
    comparison->setModal(true);
    comparison->exec();
}


void selectionDialog::on_comboBox_highlighted(int index)
{
    selectionIndex = index;
    //qDebug() << index;
}

// Function to select country randomly from the comboBox
void selectionDialog::on_checkBox_toggled(bool checked)
{
    ui->comboBox->setDisabled(checked);

    if (!ui->comboBox->isEnabled()) {
        selectionIndex = QRandomGenerator::global()->bounded(0,allCountries.size());
    }
}

void selectionDialog::on_limitSlider_valueChanged(int sliderValue)
{
    populationLimit = sliderValue;
    ui->maxPopulationLabel->setText(QString::number(populationLimit));
    updateComboBox();
}

void selectionDialog::updateComboBox()
{
    int comboBoxIndex = 0;
    ui->comboBox->clear();

    for (std::vector<QString> country : allCountries) {
        if (country.at(0) != selectedCountry) {
            if (country.at(2).toInt() < populationLimit) {
                ui->comboBox->addItem(country.at(0));
                comboBoxIndex++;
            }
        } else {
            originalCountry = country;
            ui->comboBox->addItem(country.at(0));
            chosenIndex = comboBoxIndex;
        }
    }
}

void selectionDialog::updateSlider()
{
    ui->limitSlider->setMinimum(minPopulation);
    ui->limitSlider->setMaximum(maxPopulation);
    ui->limitSlider->setValue(maxPopulation);
    ui->maxPopulationLabel->setText(QString::number(maxPopulation));
}

void selectionDialog::checkPopulationValues(int &countryPopulation)
{
    if (countryPopulation < minPopulation) {
        minPopulation = countryPopulation;
    }

    if (countryPopulation > maxPopulation) {
        maxPopulation = countryPopulation;
    }
}
