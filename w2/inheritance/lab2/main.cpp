#include <iostream>
using namespace std;
class ClassA {
  public:
    void PrintA() {
      cout << "Class A" << endl;
    }
};

class ClassB : public ClassA {
  public:
    void PrintB() {
      cout << "Class B" << endl;
    }
};

class ClassC : public ClassB {
  public:
    void PrintC() {
      cout << "Class C" << endl;
    }
};

int main() {

  ClassA a;
  ClassB b;
  ClassC c;


a.PrintA();
// a.PrintB();
// a.PrintC();
b.PrintA();
b.PrintB();
// b.PrintC();
c.PrintA(); 
c.PrintB();
c.PrintC();

  return 0;
}