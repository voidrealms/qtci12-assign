#include <QCoreApplication>
#include <QCoreApplication>
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaClassInfo>
#include <QMetaMethod>
#include <QTimer>
#include <QVariant>
#include "test.h"

void listProperties(QObject *obj) {
    qInfo() << obj->metaObject()->className();
    for(int i = 0; i < obj->metaObject()->classInfoCount(); i++){
        QMetaClassInfo c = obj->metaObject()->classInfo(i);
        qInfo() << "Info: " << c.name() << " = " << c.value();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test t;
    listProperties(&t);

    return a.exec();
}
