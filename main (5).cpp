#include <iostream>
using namespace std;


class Animal
{
public:
  void eat ()
  {
    cout << "Animal is eating." << endl;
  }

  void sleep ()
  {
    cout << "Animal is sleeping." << endl;
  }
};


class Dog:public Animal
{
public:
  void bark ()
  {
    cout << "Dog is barking." << endl;
  }
};

int
main ()
{

  Dog myDog;


  myDog.eat ();
  myDog.sleep ();


  myDog.bark ();

}
