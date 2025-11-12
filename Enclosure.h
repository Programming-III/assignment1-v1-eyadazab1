
#include <iostream>
#include <Animal.h>
#include <string>
#ifndef ENCLOSURE_H
#define ENCLOSURE_H
using namespace std;

class Enclosure {
public:
    Enclosure();
    ~Enclosure();

    void addAnimal(Animal* a ){

    //Animal [] += a;
    string *a = malloc(Animal);
    Animal [] += malloc(a);
}

void displayAnimals(){

for (i=0 ; i<= Animal [] ; i++)

cout < Animal [i]<;
}


private:
Animal [a]= ;
int capacity;
int currentCount;



};

#endif // ENCLOSURE_H
