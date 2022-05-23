#include "animal.h"

int main() {
    Animal** animal = new Animal* [3];
        animal[0] =  new Cat("Boris");
        animal[1] = new Dog("Zhuchka");
        animal[2] = new Parrot("Gosha");

        for (int i=0; i<3; i++) {
            cout << animal[i]->nickname() << " speaks " << animal[i]->speak() << endl;
        }
}
