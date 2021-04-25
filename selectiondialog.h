#ifndef SELECTIONDIALOG_H
#define SELECTIONDIALOG_H

#include <QDialog>
#include <QString>
#include "comparisondialog.h"
#include <QDebug>

namespace Ui {
class selectionDialog;
}

class selectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit selectionDialog(QString selectedCountry, std::vector<std::vector<QString>> &listOfCountries, QWidget *parent = nullptr);
    ~selectionDialog();


private slots:
    void on_buttonBox_accepted();

private:
    Ui::selectionDialog *ui;
    std::vector<QString> originalCountry;
    std::vector<QString> comparisonCountry;
};

#endif // SELECTIONDIALOG_H
