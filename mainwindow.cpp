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
   //   QTextStream stream(&file);
    //  for (int var = 0; var < 5; ++var) {
        //  stream.readLine()+var;
        //  QString Vor ,Nach,Alt,Wohn;
         // stream>>Vor>>Nach>>Alt>>Wohn;

     //  QString text1 =stream.readLine()+2;
     //   QString text2 =stream.readLine()+3;
    //  ui->textBrowser->setText(text);
//      ui->textBrowser->setText(text1);
//       ui->textBrowser->setText(text2);




      QTextStream stream(&file);
      QString Vor ,Nach,Alt,Wohn;
      QTableWidget *t1=new QTableWidget(this);
      ui->t1->setRowCount(5);
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

void MainWindow::on_Dateihinzufugen_clicked()
{
   QFile file("‪C:/Users/10774/Documents/Personmy/T1.txt");
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    QString text=ui->f11->toPlainText();
    file.flush();

}

void MainWindow::on_Exit_clicked()
{
    close();
}


