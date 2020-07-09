#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"info.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include<fstream>
#include<QString>
#include<string>
#include<iostream>


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
      QString Vor ,Nach,Alt,Wohn;
      ui->t1->setRowCount(6);
      ui->t1->setColumnCount(4);
      QStringList inf;
       stream.readLine();
      stream>>Vor>>Nach>>Alt>>Wohn;
      inf<<"Name"<<"Nachname"<<"Alter"<<"Wohnort";
      ui->t1->setHorizontalHeaderLabels(inf);

      for (int i = 0; i < ui->t1->rowCount(); ++i) {
          QTableWidgetItem *Add;

          for (int j = 0; j < ui->t1->columnCount(); ++j) {

              Add=new QTableWidgetItem;
              if(j==0)     
                Add->setText(Vor);
              if(j==1)
                  Add->setText(Nach);

              if(j==2)
                  Add->setText(Alt);

              if(j==3)
                  Add->setText(Wohn);

              ui->t1->setItem(i,j,Add);

              }
          stream.readLine()+i;
          stream>>Vor>>Nach>>Alt>>Wohn;
          }
      }


void MainWindow::on_Exit_clicked()
{
    close();
}


