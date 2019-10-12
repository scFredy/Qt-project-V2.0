#include "database.h"

QSQLiteWrap::QSQLiteWrap(QString connection_name):connection_name(connection_name)
{
    db = QSqlDatabase::addDatabase("QSQLITE", connection_name);
    db.setDatabaseName("database");
    db.setHostName("localhost");
    qDebug() << db.open();
    qDebug() << db.lastError();
}

QSQLiteWrap::~QSQLiteWrap()
{
    db.close();
}
