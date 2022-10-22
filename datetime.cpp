#include <QString>
#include <QDateTime>
#include <QDebug>

// Return current time as a string accepted by SMTP servers.
QString datetime ()
{
    QDateTime local(QDateTime::currentDateTime());
    QDateTime UTC(local.toUTC());
    qDebug() << "Local time is:" << local;
    qDebug() << "UTC time is:" << UTC;
    qDebug() << "No difference between times:" << local.secsTo(UTC);
    qDebug() << "-- Just me " << "--";

    // QString QDate::toString(const QString &format) const

    qDebug() << local.toString("ddd, MMM dd yyyy hh:mm:ss");

    return local.toString("ddd, MMM dd yyyy hh:mm:ss");
}
