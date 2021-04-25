#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
<<<<<<< HEAD
#include <QStringListModel>
#include "country.h"
#include <vector>
#include <iostream>
=======
>>>>>>> parent of cc2d0f4 (Chacnged from tableview to listview. Data changes also to countries.csv.)

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

signals:
    void sendCountries(std::vector<std::vector<QString>>, QString country);

private:
    Ui::MainWindow *ui;
<<<<<<< HEAD


=======
    QStandardItemModel *csvModel;
>>>>>>> parent of cc2d0f4 (Chacnged from tableview to listview. Data changes also to countries.csv.)
};

#endif // MAINWINDOW_H
