#ifndef SELECTIONDIALOG_H
#define SELECTIONDIALOG_H

#include <QDialog>
#include <QString>
#include "comparisondialog.h"
#include <QDebug>
#include <QRandomGenerator>
#include <QStandardItem>
#include <vector>

namespace Ui {
class selectionDialog;
}

class selectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit selectionDialog(QString selectedCountry, std::vector<std::vector<QString>> &listOfCountries, QWidget *parent = nullptr);
    ~selectionDialog();

    std::vector<std::vector<QString>> allCountries;


private slots:
    void on_buttonBox_accepted();

    void on_comboBox_highlighted(int index);

    void on_checkBox_toggled(bool checked);

private:
    Ui::selectionDialog *ui;
    std::vector<QString> originalCountry;
    int selectionIndex;
    int chosenIndex;
};

#endif // SELECTIONDIALOG_H
