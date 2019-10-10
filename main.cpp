#include "mainwindow.h"
#include <QApplication>

#include "trayicon.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow window;

    QTrayIcon icon(&window);
    icon.setIcon(QIcon(":/pics/icons/flag_gb.png"));
    icon.show();

    window.show();

    QApplication::setQuitOnLastWindowClosed(false);
    return a.exec();
}
