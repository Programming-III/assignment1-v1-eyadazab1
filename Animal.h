#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string n, int a, bool hungry);
    virtual ~Animal();

    void setName(string n);
    string getName();

    void setAge(int a);
    int getAge();

    void setIsHungry(bool hungry);
    bool getIsHungry();

    virtual void display();
    void feed();
};

#endif
