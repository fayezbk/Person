#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Dateiladen_released()
{
    QFile file("‪C:\\Users\\10774\\Documents\\Person\\T1.txt");
    if(!file.open(QIODevice::ReadWrite));
   QTextStream in (&file);
   ui->textBrowser->setText(in.readAll());

}

void MainWindow::on_Dateihinzufugen_clicked()
{
    QFile file("‪‪C:\\Qt\\InstallationLog.txt");
    if(!file.open(QIODevice::ReadWrite));
   QTextStream in (&file);
   ui->textBrowser->setText(in.readAll());

}
