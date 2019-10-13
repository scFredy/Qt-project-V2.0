#pragma once

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class QSQLiteWrap
{
public:
    QSQLiteWrap();
    ~QSQLiteWrap() { db.close(); }

private:
    QSqlDatabase db;
    QString connection_name;

public:
    QString GetConnectionName() const { return connection_name; }
    const QSqlDatabase& GetDatabase() const { return db; }
};
