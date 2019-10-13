#include "database.h"

#include <QDateTime>

QSQLiteWrap::QSQLiteWrap():connection_name(QDateTime::currentDateTime().toString())
{
    db = QSqlDatabase::addDatabase("QSQLITE", connection_name);
    db.setDatabaseName("database");
    db.setHostName("localhost");
    qDebug() << db.open();
    qDebug() << db.lastError();
}



