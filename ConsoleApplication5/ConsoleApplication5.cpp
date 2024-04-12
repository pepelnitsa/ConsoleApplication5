#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    double weight;
    string continent;

public:
    Animal(const string& _name, double _weight, const string& _continent) {
        name = _name;
        weight = _weight;
        continent = _continent;
    }

    virtual void Eat() = 0;
    virtual void Sleep() = 0;
    virtual void Move() = 0;
    virtual void MakeSound() = 0;

    virtual ~Animal() {}
};

class ISwimable {
public:
    virtual void Swim() = 0;

    virtual ~ISwimable() {}
};

class IFlyable {
public:
    virtual void Fly() = 0;

    virtual ~IFlyable() {}
};

class Cat : public Animal {
public:
    Cat(const string& _name, double _weight, const string& _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Cat is eating\n";
    }

    void Sleep() override {
        cout << "Cat is sleeping\n";
    }

    void Move() override {
        cout << "Cat is moving\n";
    }

    void MakeSound() override {
        cout << "Meow\n";
    }
};

class Dog : public Animal, public ISwimable {
public:
    Dog(const string& _name, double _weight, const string& _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Dog is eating\n";
    }

    void Sleep() override {
        cout << "Dog is sleeping\n";
    }

    void Move() override {
        cout << "Dog is moving\n";
    }

    void MakeSound() override {
        cout << "Woof\n";
    }

    void Swim() override {
        cout << "Dog is swimming\n";
    }
};

class Parrot : public Animal, public IFlyable {
public:
    Parrot(const string& _name, double _weight, const string& _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Parrot is eating\n";
    }

    void Sleep() override {
        cout << "Parrot is sleeping\n";
    }

    void Move() override {
        cout << "Parrot is moving\n";
    }

    void MakeSound() override {
        cout << "Squawk\n";
    }

    void Fly() override {
        cout << "Parrot is flying\n";
    }
};

class Duck : public Animal, public ISwimable, public IFlyable {
public:
    Duck(const string& _name, double _weight, const string& _continent) : Animal(_name, _weight, _continent) {}

    void Eat() override {
        cout << "Duck is eating\n";
    }

    void Sleep() override {
        cout << "Duck is sleeping\n";
    }

    void Move() override {
        cout << "Duck is moving\n";
    }

    void MakeSound() override {
        cout << "Quack\n";
    }

    void Swim() override {
        cout << "Duck is swimming\n";
    }

    void Fly() override {
        cout << "Duck is flying\n";
    }
};

int main() {
    Cat cat("Tom", 5.5, "Europe");
    Dog dog("Buddy", 10.2, "North America");
    Parrot parrot("Polly", 1.2, "South America");
    Duck duck("Donald", 3.8, "North America");

    cout << "Cat:\n";
    cat.Eat();
    cat.Sleep();
    cat.Move();
    cat.MakeSound();

    cout << "\nDog:\n";
    dog.Eat();
    dog.Sleep();
    dog.Move();
    dog.MakeSound();
    dog.Swim();

    cout << "\nParrot:\n";
    parrot.Eat();
    parrot.Sleep();
    parrot.Move();
    parrot.MakeSound();
    parrot.Fly();

    cout << "\nDuck:\n";
    duck.Eat();
    duck.Sleep();
    duck.Move();
    duck.MakeSound();
    duck.Swim();
    duck.Fly();

    return 0;
}
