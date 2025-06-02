#ifndef DBINIT_H
#define DBINIT_H

#include <QObject>
#include <QSqlDatabase>
using namespace std;

class DbInit : public QObject
{
    Q_OBJECT

public:
    explicit DbInit(QObject *parent = nullptr);
    bool connectToDatabase(const QString &dbPath);
    void initializeTables();
    QString citiesAdd(QString cityName);
    int citiesCount(int cityCount);
    QString citiesAddToCombo(QString cityName, int a);


private:
    QSqlDatabase db;
};

#endif // DBINIT_H
