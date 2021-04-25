#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include "country.h"
#include <vector>
#include <iostream>

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
    std::vector<std::vector<QString>> listOfCountries;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
