#include "animal.h"

Animal::Animal(string n) {
    name = n;
};

string Cat::nickname() {
    return "cat " + name;
}

string Cat::speak() {
    return "meow-meow";
};

string Dog::nickname() {
    return "dog " + name;
}

string Dog::speak() {
    return "woof-woof";
};

string Parrot::nickname() {
    return  "parrot " + name;
}

string Parrot::speak() {
    return "chirp-chirp";
};