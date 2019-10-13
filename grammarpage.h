#pragma once

#include <QtWidgets>

#include "database.h"

class QGrammarPage : public QWidget
{
    Q_OBJECT
public:
    QGrammarPage(QWidget* parent = nullptr);
    ~QGrammarPage();

private:
    QVBoxLayout*  m_pLeftVL;
    QHBoxLayout*  m_pMainHL;

    QTextEdit*    m_pText;
    QListWidget*  m_pList;

    QSQLiteWrap db;

private:
    void SetupGui();
    void LoadList();
};
