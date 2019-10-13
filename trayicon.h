#pragma once

#include <QtWidgets>

class QTrayIcon : public QSystemTrayIcon
{
    Q_OBJECT
public:
    QTrayIcon(QApplication* app, QWidget* main_window);
    ~QTrayIcon();

private:
    QApplication* m_pApp;
    QWidget*      m_pMainWnd;
    QMenu*        m_pContMenu;

private:
    void SetupMenu();

private slots:
    void OnIconActivated(QSystemTrayIcon::ActivationReason reason); 
};
