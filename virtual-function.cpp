#include <iostream>
#include <new>
using namespace std;

class Animal
{
public:
    virtual void sound() { cout << "Animal is making a sound" << endl; }
    virtual void sleep() { cout << "Animal is sleeping" << endl; }
};

class Dog : public Animal
{
public:
    void sound() { cout << "Dog is barking" << endl; }
    void sleep() { cout << "Dog is sleeping" << endl; }
};

int main()
{
    Dog dog;
    dog.sound();
    dog.sleep();

    Animal* animal = new Dog();
    animal->sound();
    animal->sleep();

    Animal* animal2 = new Animal();
    animal2->sound();
    animal2->sleep();

    return 0;
}