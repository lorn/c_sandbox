#ifndef VALUEOBJECT_H
#define VALUEOBJECT_H
#include <QObject>


class ValueObject : public QObject
{
Q_OBJECT
public:
    explicit ValueObject(QObject *parent=0);

    void setValue(int value);
    int value() const;


private:
    int m_value;

};

#endif // VALUEOBJECT_H
