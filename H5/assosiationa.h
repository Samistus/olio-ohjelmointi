#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "classb.h"



class AssosiationA
{

private:
    classB objectB;
public:
    AssosiationA(classB);
    string getBinfo();
    void setBinfo(string);
 };

#endif // ASSOSIATIONA_H
