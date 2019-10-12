#pragma once

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>

class QSQLiteWrap
{
public:
    QSQLiteWrap();
    QSQLiteWrap(QString connection_name);

    ~QSQLiteWrap() { db.close(); }

private:
    QSqlDatabase db;
    QString connection_name;

public:
    QString GetConnectionName() const { return connection_name; }
    const QSqlDatabase& GetDatabase() const { return db; }

private:
    void SetupConnection(QString name);
};
