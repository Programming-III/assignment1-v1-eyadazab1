#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal();
    Mammal(string n, int a, bool hungry, string color);
    ~Mammal();

    void setFurColor(string color);
    string getFurColor();

    void display() override;
};

#endif
