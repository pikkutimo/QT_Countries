#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "loader.h"
#include "selectiondialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listView->setSelectionMode(QAbstractItemView::SingleSelection);
    list = new QStringList();
    model = new QStringListModel(*list, NULL);

    listOfCountries = loader();


    for (std::vector<QString> country : listOfCountries) {
        list->append(country.at(0));
    }

    model->setStringList(*list);
    ui->listView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QModelIndexList selectedIndexes(ui->listView->selectionModel()->selectedIndexes());
    QString country = selectedIndexes.at(0).data().toString();
    qDebug() << country;
    selectionDialog *dialog = new selectionDialog(country, listOfCountries);
    Qt::WindowFlags flags(Qt::WindowTitleHint);
    dialog->setWindowFlags(flags);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->setModal(true);
    dialog->exec();
}

