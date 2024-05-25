#include <iostream>
#include <vector>
using namespace std;

// add class definitions below this line
class Person
{
private:
  string name;
  int age;
  string occupation;

public:
  Person(string name, int age, string occupation)
  {
    this->name = name;
    this->age = age;
    this->occupation = occupation;
  }
  string GetName()
  {
    return name;
  }
  void SetName(string name)
  {
    this->name = name;
  }
  int GetAge()
  {
    return age;
  }
  void SetAge(int age)
  {
    this->age = age;
  }
  string GetOccupation()
  {
    return occupation;
  }
  void SetOccupation(string occupation)
  {
    this->occupation = occupation;
  }
};

// add class definitions above this line

int main()
{

  // DO NOT EDIT CODE BELOW THIS LINE

  Person p("Citra Curie", 16, "student");
  cout << p.GetName() << endl;
  p.SetName("Rowan Faraday");
  cout << p.GetAge() << endl;
  p.SetAge(18);
  cout << p.GetOccupation() << endl;
  p.SetOccupation("plumber");
  cout << p.GetName() << endl;
  cout << p.GetAge() << endl;
  cout << p.GetOccupation() << endl;

  // DO NOT EDIT CODE ABOVE THIS LINE

  return 0;
}