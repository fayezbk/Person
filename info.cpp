#include "info.h"

info::info()
{
    this->m_Vorname = "";
    this->m_Nachname = "";
    this->m_Alter = "";
    this->m_Wohnort = "";
}

/* Objektaufruf */
info::info(QString p_Vorname,QString p_Nachname,QString p_Alter,QString p_Wohnort)
{
    this->Set_Vorname(p_Vorname);
    this->Set_Nachname(p_Nachname);
    this->Set_Alter(p_Alter);
    this->Set_Wohnort(p_Wohnort);
}

/* Kopierfunktion */
info::info(info& original)
{
    this -> Set_Vorname(original.m_Vorname);
    this -> Set_Nachname(original.m_Nachname);
    this -> Set_Alter(original.m_Alter);
    this -> Set_Wohnort(original.m_Wohnort);
}


void info::Set_Vorname(QString p_Vorname)
{
    this->m_Vorname = p_Vorname;
}


void info::Set_Nachname(QString p_Nachname)
{
    this->m_Nachname = p_Nachname;
}
void info::Set_Alter(QString p_Alter)
{
    this->m_Alter = p_Alter;
}

void info::Set_Wohnort(QString p_Wohnort)
{
    this->m_Wohnort = p_Wohnort;
}



