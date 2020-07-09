#define INFO_H
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include<fstream>
#include<sstream>
#include<QString>
#include<string>


class info
{
private:
    QString m_Vorname = "";
    QString m_Nachname = "";
    QString m_Alter = "";
    QString m_Wohnort = "";

public:
    /* Standardkonstruktor */
    info();

    /* Überladener Konstruktor */
    info(QString p_Vorname, QString p_Nachname, QString p_Alter, QString p_Wohnort);

    /* Destruktor*/
    ~info();

    /* Setter */
    void Set_Vorname(QString p_Vorname);
    void Set_Nachname(QString p_Nachname);
    void Set_Alter(QString p_Alter);
    void Set_Wohnort(QString p_Wohnort);

    /* Getter */
    QString Get_Vorname() { return this -> m_Vorname; }
    QString Get_Nachname() { return this -> m_Nachname; }
    QString Get_Alter() { return this -> m_Alter; }
      QString Get_Wohnort() { return this -> m_Wohnort; }

    /* Kopierkonstruktor */
    info(info& original);


};
