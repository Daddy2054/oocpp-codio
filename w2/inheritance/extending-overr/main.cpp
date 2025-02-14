#include <iostream>
using namespace std;

class Person {
  public:
    Person(string n, int a, string o) {
      name = n;
      age = a;
      occupation = o;
    }
  
    string GetName() {
      return name;
    }
  
    void SetName(string new_name) {
      name = new_name;
    }
  
    int GetAge() {
      return age;
    }
  
    void SetAge(int new_age) {
      age = new_age;
    }
  
    string GetOccupation() {
      return occupation;
    }
  
    void SetOccupation(string new_occupation) {
      occupation = new_occupation;
    }
  
    void SayHello() {
      cout << "Hello, my name is " << name << '.' << endl;
    }
  
    void SayAge() {
      cout << "I am " << age << " years old." << endl;
    }
  
  private:
    string name;
    int age;
    string occupation;
};

//add class definitions below this line
//add class definitions below this line

class Superhero : public Person {
  public:
    Superhero(string n, int a, string o, string s, string ne) : Person(n, a, o) {
      secret_identity = s;
      nemesis = ne;
    }
  
    string GetSecretIdentity() {
      return secret_identity;
    }
  
    void SetSecretIdentity(string new_secret_identity) {
      secret_identity = new_secret_identity;
    }
  
    string GetNemesis() {
      return nemesis;
    }
  
    void SetNemesis(string new_nemesis) {
      nemesis = new_nemesis;
    }
  
    void RevealSecretIdentity() {
      cout << "My real name is " << secret_identity << '.' << endl;
    }
      void SayNemesis() {
      cout << "My nemesis is " << nemesis << '.' << endl;
    }
        void SayHello() {
      cout << "My name is " << GetName() << ", and criminals fear me." << endl;
    }
      void SayAge() {
      cout << "Age is just a number." << endl;
    }

  private:
    string secret_identity;
    string nemesis;
};
//add class definitions above this line


//add class definitions above this line

int main() {
  
  //add code below this line
  //add code below this line

  Superhero hero("Spider-Man", 16, "student", "Peter Parker", "Doc Octopus");
  hero.RevealSecretIdentity();
  hero.SayNemesis();
  cout << hero.GetName() << endl;
  cout << hero.GetAge() << endl;
  cout << hero.GetOccupation() << endl;
  cout << hero.GetSecretIdentity() << endl;



  // Superhero hero("Storm", 30, "Queen of Wakanda", "Ororo Munroe", "Shadow King");
  hero.SayHello();
  hero.Person::SayHello();
  hero.SayAge();
  hero.Person::SayAge();
  //add code above this line


  //add code above this line
  
  return 0;
  
}