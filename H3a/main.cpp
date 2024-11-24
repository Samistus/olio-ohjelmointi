#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main() {
    Chef* chef = new Chef("Gordon Ramsay");
    chef->makeSalad();
    chef->makeSoup();
    delete chef;


    ItalianChef* italianChef = new ItalianChef("Anthony Bourdain");
    italianChef->makeSalad();
    italianChef->makeSoup();
    italianChef->makePasta();
    cout << "name of the Italian chef is " << italianChef->getName() << endl;
    delete italianChef;

    return 0;
}
