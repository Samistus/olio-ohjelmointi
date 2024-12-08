#include "ClassB.h"

class AggregationA {
private:
    classB &refB;
public:
    AggregationA(classB&);
    string getBinfo();
    void setBinfo(string);
};
