#include <iostream>
using namespace std;
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"
int main()
{
    int a = 5;
    int b =10;



    cout << "a:n arvo on: " <<a <<" ja osoite on: " << &a <<endl;
    cout << "b:n arvo on: " <<b <<" ja osoite on: " << &b <<endl;

    int *myPointer = &a;

    cout<< "Pointterin osoittama osoite on: " <<myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " <<myPointer <<endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;


    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:m osoittaman muistipaikan arvo on: " << refA <<endl;

    refA = b;


    classB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout <<"Assosiaatio esimerkki:" << endl;
    cout <<"objB: "<< objB.getInfo()<< endl;
    cout <<"objAss: " << objAss.getBinfo()<< endl;



    cout<< "Aggregaatio esimerkki:"<<endl;
    classB &refB = objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout << "objB: " <<objB.getInfo()<< endl;
    cout <<"objAggr:" << objAggr.getBinfo()<< endl;
     return 0;
}
