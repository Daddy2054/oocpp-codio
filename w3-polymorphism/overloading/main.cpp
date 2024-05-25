#include <iostream>
using namespace std;

//add class definitions below this line

class TestClass {
  public:
    int Sum(int n1, int n2, int n3) {
      return n1 + n2 + n3;
    }

    int Sum(int n1, int n2) {
      return n1 + n2;
    }
};
//add class definitions below this line

class Person { 
  public: 
    Person() {}

    Person(string na, int nu, string s) {
      name = na;
      number = nu;
      street = s;
    }

    string Info() {
      return (name + " lives at " + to_string(number) + ' ' + street + '.');
    }
  
  private:
    string name;
    int number;
    string street;
};

class ExampleClass {
  public:
    int TotalChars(string s1, string s2, string s3) {
      return s1.length() + s2.length() + s3.length();
    }

    int TotalChars(string s1) {
      return s1.length();
    }
};
//add class definitions above this line
//add class definitions above this line
int main() {
  
  //add code below this line

  TestClass tc;
  cout << tc.Sum(1, 2, 3) << endl;
  cout << tc.Sum(1, 2) << endl;
  //add code below this line
  
  Person p1;
  Person p2("Calvin", 37, "Main Street");
  cout << p1.Info() << endl;
  cout << p2.Info() << endl;
    


  ExampleClass e ;
  // cout << e.TotalChars("hello", "world") << endl;
  
  //add code above this line
  //add code above this line
  return 0;
  
}