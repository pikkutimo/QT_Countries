#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    std::vector<QString> country;
    // Open the file from the directory
    QFile file("../countries.csv");
    if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        //Create a thread to retrieve data from a file
        QTextStream in(&file);
        //Reads the data up to the end of file
        while (!in.atEnd())
        {
            QString line = in.readLine();

            // consider that the line separated by semicolons into columns
            for (QString item : line.split(",")) {
                country.push_back(item);
            }

            listOfCountries.push_back(country);
            country.clear();

        }
    }
    file.close();

    for (std::vector<QString> country : listOfCountries) {
        ui->listWidget->addItem(country.at(0));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
    delete csvModel;
}
