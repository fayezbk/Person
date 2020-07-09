#include "egg5.h"
#include "ui_egg5.h"
#include <QPixmap>
#include <mainwindow.h>

egg5::egg5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::egg5)
{
    ui->setupUi(this);
    QPixmap pictures;
    pictures.load(":/new/prefix1/chris.jpg");
    ui->label_pic1->setPixmap(pictures);
}

egg5::~egg5()
{
    delete ui;
}

void egg5::on_pushButton_clicked()
{

}
