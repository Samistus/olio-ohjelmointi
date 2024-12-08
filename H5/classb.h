#ifndef CLASSB_H
#define CLASSB_H
#include <string>
using namespace std;

class classB
{
private:
    string info;
public:
    void setInfo (string value) { info = value ;}
    string getInfo() {return info;}
};

#endif // CLASSB_H
