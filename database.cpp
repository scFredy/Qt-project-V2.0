#include "database.h"

#include <QDateTime>

QSQLiteWrap::QSQLiteWrap():connection_name(QDateTime::currentDateTime().toString())
{
    SetupConnection(connection_name);
}

QSQLiteWrap::QSQLiteWrap(QString connection_name):connection_name(connection_name)
{
    SetupConnection(connection_name);
}

void QSQLiteWrap::SetupConnection(QString name)
{
    db = QSqlDatabase::addDatabase("QSQLITE", name);
    db.setDatabaseName("database");
    db.setHostName("localhost");
    qDebug() << db.open();
    qDebug() << db.lastError();
}
