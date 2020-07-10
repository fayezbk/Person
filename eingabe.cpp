#include "eingabe.h"
#include "ui_eingabe.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <mainwindow.h>

Eingabe::Eingabe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Eingabe)
{
    ui->setupUi(this);
}

Eingabe::~Eingabe()
{
    delete ui;
}

void Eingabe::on_pushButton_clicked()
{

    QString new_member = QFileDialog::getSaveFileName(this, "OPEN FILE","C://");
    QFile comment(new_member);

    if (!comment.open(QFile::Append | QFile::Text)){
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream out(&comment);
    QString text = ui->plainTextEdit->toPlainText();
     out<<text;
    comment.flush();
    comment.close();
 }

void Eingabe::on_pushButton_2_clicked()
{
  close();
}


void Eingabe::on_pushButton_3_clicked()
{
    close();
}
