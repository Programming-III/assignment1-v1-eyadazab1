#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
private:
    bool isVenomous;

public:
    Reptile();
    Reptile(string n, int a, bool hungry, bool venomous);
    ~Reptile();

    void setIsVenomous(bool venomous);
    bool getIsVenomous();

    void display() override;
};

#endif
