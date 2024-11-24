#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string name);
    virtual ~ItalianChef();

    void makePasta();
    string getName();
};

#endif // ITALIAN_CHEF_H
