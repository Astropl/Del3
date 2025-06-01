#ifndef DBINIT_H
#define DBINIT_H

#include <QObject>
#include <QSqlDatabase>

class DbInit : public QObject
{
    Q_OBJECT

public:
    explicit DbInit(QObject *parent = nullptr);
    bool connectToDatabase(const QString &dbPath);
    void initializeTables();

private:
    QSqlDatabase db;
};

#endif // DBINIT_H
