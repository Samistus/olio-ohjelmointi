#include "Chef.h"

Chef::Chef(string name) {
    this->name = name;
    cout << "Chef " << name << " konstruktori" << endl;
}

void Chef::makeSalad() {
    cout << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << name << " makes soup" << endl;
}
Chef::~Chef() {
    cout << "Chef " << name << " destruktori " << endl;
}

