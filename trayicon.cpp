#include "trayicon.h"

QTrayIcon::QTrayIcon(QApplication* app, QWidget* main_window):QSystemTrayIcon(),m_pApp(app), m_pMainWnd(main_window)
{
    SetupMenu();

    connect(this, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(OnIconActivated(QSystemTrayIcon::ActivationReason)), Qt::AutoConnection);
}

QTrayIcon::~QTrayIcon()
{

}

void QTrayIcon::SetupMenu()
{
    m_pContMenu = new QMenu();
    m_pContMenu->addAction("Close", m_pApp, SLOT(quit()), Qt::AutoConnection);

    setContextMenu(m_pContMenu);
}

void QTrayIcon::OnIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    if(reason == ActivationReason::Trigger)
        m_pMainWnd->show();
}

