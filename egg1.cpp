#include "egg1.h"
#include "ui_egg1.h"
#include "egg2.h"
#include <QPixmap>
#include <QMessageBox>


egg1::egg1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::egg1)
{
    ui->setupUi(this);
    QPixmap pictures;
    pictures.load(":/new/prefix1/chris.jpg");
    ui->label_pic1->setPixmap(pictures);

}


egg1::~egg1()
{
    delete ui;
}

void egg1::on_buttonBox_accepted()
{

}

void egg1::on_pushButton_clicked()
{
   egg2 *new_egg = new egg2;
   new_egg->exec();
}
