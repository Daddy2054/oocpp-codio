#include <iostream>
using namespace std;

// add class definitions below this line

struct Person
{
  string name;
  int age;
  double salary;
};
enum grades
{
  A = 90,
  B = 80,
  C = 70,
  D = 60
};
// add class definitions above this line

enum colors
{
  red = 1,
  blue,
  yellow
};

int main()
{

  // add code below this line

  Person p;
  p.age = 50;
  cout << p.age << endl;

  grades grade;

  grade = A;
  cout << "Grade = " << grade << endl;

  colors color;
  color = blue;
  cout << "Color = " << color << endl;

  // add code above this line

  return 0;
}