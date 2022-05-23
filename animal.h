#ifndef OOP11_ANIMAL_H
#define OOP11_ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(string="");
    virtual string speak() = 0;
    virtual string nickname() = 0;
    ~Animal() {};
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n) {};
    string nickname();
    string speak();
    ~Cat() {};
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {};
    string nickname();
    string speak();
    ~Dog() {};
};

class Parrot : public Animal {
public:
    Parrot(string n) : Animal(n) {};
    string nickname();
    string speak();
    ~Parrot() {};
};

#endif //OOP11_ANIMAL_H
