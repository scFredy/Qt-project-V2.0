#pragma once

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

class QSQLiteWrap
{
public:
    QSQLiteWrap(QString connection_name);
    ~QSQLiteWrap();

private:
    QSqlDatabase db;
    QString connection_name;

public:
    QString GetConnectionName() const { return connection_name; }
    const QSqlDatabase& GetDatabase() const { return db; }
};
