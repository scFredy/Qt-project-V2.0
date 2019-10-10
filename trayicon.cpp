#include "trayicon.h"

QTrayIcon::QTrayIcon(QWidget* parent):QSystemTrayIcon(parent), m_pParent(parent)
{
    connect(this, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(OnIconActivated(QSystemTrayIcon::ActivationReason)), Qt::AutoConnection);
}

QTrayIcon::~QTrayIcon()
{

}

void QTrayIcon::OnIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    if(reason == ActivationReason::Trigger)
        m_pParent->show();
}

