#pragma once

#include <QtWidgets>

#include "infopage.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTabWidget* m_pMainTab;
    QInfoPage*  m_pInfoPage;

    QSettings*  m_pSettings;

private:
    void SaveSettings();
    void LoadSettings();
};

