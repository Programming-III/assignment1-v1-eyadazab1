#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"

int main() {
    Enclosure* enclosure1 = new Enclosure(10);

    Mammal* lion = new Mammal("Lion", 5, true, "Golden");
    Bird* parrot = new Bird("Parrot", 2, false, 0.25);
    Reptile* snake = new Reptile("Snake", 3, true, true);

    enclosure1->addAnimal(lion);
    enclosure1->addAnimal(parrot);
    enclosure1->addAnimal(snake);

    cout << "Enclosure 1 Animals:" << endl;
    enclosure1->displayAnimals();

    Visitor visitor("Sarah Ali", 3);
    cout << "\nVisitor Info:" << endl;
    visitor.displayInfo();

    delete enclosure1;
    delete lion;
    delete parrot;
    delete snake;

    return 0;
}
