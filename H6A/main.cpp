#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Luodaan MyClass-olio
    MyClass myClass;

    // Kutsutaan raiseMySignal-metodia, joka laukaisee mySignal-signaalin
    myClass.raiseMySignal();

    return a.exec();
}
