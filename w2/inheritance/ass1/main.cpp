#include <iostream>
using namespace std;

class Car
{
public:
  Car(string ma, string mo, string c)
  {
    make = ma;
    model = mo;
    color = c;
  }

  string GetMake()
  {
    return make;
  }

  string GetModel()
  {
    return model;
  }

  string GetColor()
  {
    return color;
  }

private:
  string make;
  string model;
  string color;
};

class Sedan : public Car
{
public:
  Sedan(string ma, string mo, string c) : Car(ma, mo, c) {}
  void Describe()
  {
    cout << "I am a " << GetColor() << ' ';
    cout << GetMake() << ' ' << GetModel() << '.' << endl;
  }
};

int main()
{

  Sedan sedan("Toyota", "Camry", "Red");
  sedan.Describe();
  return 0;
}