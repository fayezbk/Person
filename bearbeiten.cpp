#include "bearbeiten.h"
#include "ui_bearbeiten.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

bearbeiten::bearbeiten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bearbeiten)
{
    ui->setupUi(this);
}

bearbeiten::~bearbeiten()
{
    delete ui;
}

void bearbeiten::on_pushButton_anzeigen_clicked()
{
        QFile liste(QFileDialog::getOpenFileName(this,tr("open File"),"",tr("Text Files(*.txt)")));
     // QFile liste("C:/Users/10582/Desktop/Person-masterr/T1.txt");
       if (!liste.open(QFile::ReadOnly | QFile::Text )){
       QMessageBox::warning(this, "titel", "Datei konnte nicht geöffnet werden");
    }

    QTextStream in(&liste);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    liste.close();

}

void bearbeiten::on_pushButton_Save_clicked()
{
     QFile liste(QFileDialog::getOpenFileName(this,tr("open File"),"",tr("Text Files(*.txt)")));
  //  QFile liste("C:/Users/10582/Desktop/Person-masterr/T1.txt");
     if (!liste.open(QFile::WriteOnly | QFile::Text )){
     QMessageBox::warning(this, "titel", "Datei konnte nicht geöffnet werden");
  }

  QTextStream out(&liste);
  QString text = ui->plainTextEdit->toPlainText();
  out << text;
  liste.flush();
  liste.close();
}









void bearbeiten::on_pushButton_Exit_clicked()
{
    close();
}
