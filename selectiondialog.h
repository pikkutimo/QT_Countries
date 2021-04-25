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
    explicit selectionDialog(QWidget *parent = nullptr);
    ~selectionDialog();

signals:
    void sendVectors(std::vector<QString> originalCountry, std::vector<QString> comparisonCountry);


private slots:
    //void on_buttonBox_accepted();
    void receiveCountrySignla(std::vector<std::vector<QString>>, QString);

private:
    Ui::selectionDialog *ui;
    std::vector<std::vector<QString>> *listOfCountries;
    QString *selectedCountry;
    std::vector<QString> originalCountry;
    std::vector<QString> comparisonCountry;
};

#endif // SELECTIONDIALOG_H
