#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QCloseEvent>
#include <QMessageBox>
#include <QRandomGenerator>
#include "country.h"
#include <vector>
#include <iostream>
#include <algorithm>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QStringList* list;
    QStringListModel* model;
    QStringList* attributesList;
    QStringListModel* countryModel;
    std::vector<std::vector<QString>> listOfCountries;
    bool static sortByPopulation(const std::vector<QString>& v1,const std::vector<QString>& v2);
    bool static sortByArea(const std::vector<QString>& v1,const std::vector<QString>& v2);
    bool static sortByName(const std::vector<QString>& v1,const std::vector<QString>& v2);
    void updateList();
    void updateCountryAttributes();
    void closeEvent(QCloseEvent* event);

private slots:
    void on_pushButton_clicked();

    void on_sortByPopulationButton_clicked();

    void on_sortAlphabeticallyButton_clicked();

    void on_sortByAreaButton_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_randomPushButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
