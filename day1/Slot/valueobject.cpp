#include "valueobject.h"

ValueObject::ValueObject(QObject *obj):
    m_value(42)
{
    qDebug("ValueObject inherits QObject: %s",
    this->inherits("QObject")?"yes":"no");

}

void ValueObject::setValue(int value)
{
this->m_value = value;
}

int ValueObject::value() const
{
 return(this->m_value);
}
