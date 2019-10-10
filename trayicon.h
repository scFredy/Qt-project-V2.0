#pragma once

#include <QtWidgets>

class QTrayIcon : public QSystemTrayIcon
{
    Q_OBJECT
public:
    QTrayIcon(QWidget* parent = nullptr);
    ~QTrayIcon();

private:
    QWidget* m_pParent;

private slots:
    void OnIconActivated(QSystemTrayIcon::ActivationReason reason);
};
