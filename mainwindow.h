#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include<QDialog>
#include<QSpinBox>
#include<QTextEdit>
#include<QComboBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QIODevice>
#include<QFileDialog>
#include<fstream>
#include<QString>
#include<string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Dateiladen_clicked();

    void on_Dateiladen_released();

    void on_Dateihinzufugen_clicked();

    void on_Exit_clicked();

private:
    Ui::MainWindow *ui;
    void Tabledaiplay();
};
#endif // MAINWINDOW_H
