#include <iostream>
using namespace std;

class Person {
  public:
    // Person(string n1, int a1) {
    //   name = n1;
    //   age = a1;
    // }
  
    void ReturnPerson() {
      cout << name << endl;
      cout << age << endl;
    }
      void Greeting() {
      cout << "I'm a Person" << endl;
    }
  private:
    string name;
    int age;
};

//add class definitions below this line

//add class definitions below this line

class Superhero : public Person {
  public:
    // Superhero(string n2, int a2) : Person(n2, a2) {}
        void Greeting() {
      cout << "I'm a Superhero" << endl;
    }
};
class Animal {
  public:
    void Greeting() {
      cout << "I'm an Animal" << endl;
    }
};
class Dog {
  public:
    Dog(string n1, string b1) {
      name = n1;
      breed = b1;
    }
                void Greeting() {
  cout << name << endl;
  cout << breed << endl;

    }

  private:
    string name;
    string breed;
};
/* First create the derived class, Pug, that inherits from the base class Dog. 
Note that public inheritance should be used over private, otherwise, 
the derived class constructor will not be able to access the base class constructor. 
The constructor of the derived class Pug should contain the same parameter types 
as that of the base class. Therefore, Pug needs two string parameters 
(i.e. string n2 and string b2). Then associate the derived class constructor 
with a colon : followed by the name of the base class constructor as well as 
its arguments and finally empty braces ({}). Note that the Pug constructor 
itself should be made public: and this declaration must be made before 
the constructor and association, otherwise, creating a Pug object within 
main() will not be possible. Finally, end with the ending curly brace } 
followed by a semicolon (;).
 */

class Pug : public Dog {
    public:
        Pug(string n2, string b2) : Dog(n2, b2) {}
};  
//add class definitions above this line

//add class definitions above this line

void Substitution(Person p) {
  p.Greeting();
}

int main() {
  Pug p("Fido", "Pug");
    p.Greeting();
  //add code below this line

  // Superhero s("Spider-Man", 16);
  // s.ReturnPerson();

  //add code below this line

  cout << boolalpha;
  cout << "Superhero is derived from Person: " << is_base_of<Person, Superhero>::value << endl;
  cout << "Animal is derived from Superhero: " << is_base_of<Superhero, Animal>::value << endl;
  cout << "Person is derived from Animal: " << is_base_of<Animal, Person>::value << endl;
  cout << "Person is derived from Superhero: ";
  cout << is_base_of<Superhero, Person>::value << endl;

    Superhero s;
  cout << "s is of type: " << typeid(s).name() << endl;
  //add code below this line

  cout << boolalpha;
  cout << "Superhero is derived from Person: ";
  cout << is_base_of<Person, Superhero>::value << endl;

//LSP
  // Superhero s;
  Substitution(s);

  //add code above this line
  //add code above this line
  //add code above this line
  
  return 0;
  
}