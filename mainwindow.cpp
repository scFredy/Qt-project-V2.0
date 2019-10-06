#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_pSettings = new QSettings("GG", "project");
    m_pMainTab  = new QTabWidget();
    m_pInfoPage = new QInfoPage();

    m_pMainTab->addTab(m_pInfoPage, tr("Info"));

    setCentralWidget(m_pMainTab);
    LoadSettings();
}

MainWindow::~MainWindow()
{
    SaveSettings();

  //for autosize testing
  /*m_pSettings->remove("geometry/width");
    m_pSettings->remove("geometry/height");
    m_pSettings->remove("geometry/posX");
    m_pSettings->remove("geometry/posY");*/
}

void MainWindow::SaveSettings()
{
    m_pSettings->beginGroup("geometry");

    m_pSettings->setValue("width", this->width());
    m_pSettings->setValue("height", this->height());
    m_pSettings->setValue("posX", this->x());
    m_pSettings->setValue("posY", this->y());

    m_pSettings->endGroup();
}

void MainWindow::LoadSettings()
{
    QScreen* p_Screen = QGuiApplication::screens().first();
    QRect rect = p_Screen->geometry();

    int width, height, posX, posY;

    width  = m_pSettings->value("geometry/width", rect.width()/2).toInt();
    height = m_pSettings->value("geometry/height", rect.height()/1.6).toInt();
    posX   = m_pSettings->value("geometry/posX", rect.width()/4).toInt();
    posY   = m_pSettings->value("geometry/posY", rect.height()/5).toInt();

    setGeometry(posX, posY, width, height);
}
