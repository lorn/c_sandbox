#include <QtCore/QCoreApplication>
#include <valueobject.h>
#include <QVariant>
    
int main(int argc, char *argv[])
{
    ValueObject o;
    qDebug("Value: %d = %d", o.value(), o.property("value").toInt());
    o.setValue(42);
    qDebug("Value: %d = %d", o.value(), o.property("value").toInt());
    o.setProperty("value", 11);
    qDebug("Value: %d = %d", o.value(), o.property("value").toInt());

    return 0;
    // QCoreApplication a(argc, argv);

    //  return a.exec();
}
