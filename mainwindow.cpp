#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "eingabe.h"
#include "egg1.h"
#include "bearbeiten.h"

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
      ui->t1->setRowCount(50);    //<-- Zeilen
      ui->t1->setColumnCount(4);    //<-- Spalten
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



void MainWindow::on_Dateihinzufugen_clicked()
{
    Eingabe *new_text = new Eingabe();
    new_text->exec();

}

void MainWindow::on_Dateiladen_released()
{
    egg1 *new_page = new egg1();
    new_page->exec();


}

void MainWindow::on_Dateihinzufugen_2_clicked()
{
    bearbeiten *new_text = new bearbeiten();
    new_text->exec();
}
