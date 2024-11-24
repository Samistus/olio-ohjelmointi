#include "ItalianChef.h"

ItalianChef::ItalianChef(string name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << getName() << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout <<"Italian chef " <<getName() << " makes pasta" << endl;
}

string ItalianChef::getName() {
    return name;
}
