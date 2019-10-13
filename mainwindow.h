#pragma once

#include <QtWidgets>

#include "infopage.h"
#include "grammarpage.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTabWidget*   m_pMainTab;
    QInfoPage*    m_pInfoPage;
    QGrammarPage* m_pGrammarPage;

    QSettings*    m_pSettings;

private:
    void SaveSettings();
    void LoadSettings();
};

