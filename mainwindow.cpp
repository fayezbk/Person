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





void MainWindow::on_Dateiladen_clicked()
{
    QFile file(QFileDialog::getOpenFileName(this,tr("open File"),"",tr("Text Files(*.txt)")));
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream stream(&file);
    QString text =stream.readAll();
    QMessageBox box;
    ui->textBrowser->setText(text);
    box.exec();
file.close();
}

void MainWindow::on_Dateihinzufugen_clicked()
{
    QFile file("‪C:/Users/10774/Documents/Personmy/T1.txt");
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    QString text=ui->f11->toPlainText();
    out<<text;
    file.flush();

file.close();
}

void MainWindow::on_Exit_clicked()
{
    close();
}