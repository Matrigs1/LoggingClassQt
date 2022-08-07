#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qDebug() << this << "constructed";
}

void Test::testing()
{
    qWarning() << "This is a test!";
}
