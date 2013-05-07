#include <iostream>

using namespace std;

class Animal {
 public:
  virtual void eat() { cout << "Animal::eat()" << endl; }
};
 
// Two classes virtually inheriting Animal:
class Mammal : public virtual Animal {
 public:
  virtual void breathe() { cout << "Mammal::breathe()" << endl; }
  virtual void eat() { cout << "Mammal::eat()" << endl; }
};
 
class WingedAnimal : public virtual Animal {
 public:
  virtual void flap() { cout << "WingedAnimal::flap()" << endl; }
  virtual void eat() { cout << "WingedAnimal::eat()" << endl; }
};
 
// A bat is still a winged mammal
class Bat : public Mammal, public WingedAnimal {
};

int main() {
    
    Bat bat;

    bat.eat();

    return 0;
}
