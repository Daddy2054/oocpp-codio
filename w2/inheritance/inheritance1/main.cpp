#include <iostream>
using namespace std;

class Base {
  public:
    void Public(string s) {
      s = "public";
      cout << s << endl;
    }
  
  protected:
    void Protected(string s) {
      s = "protected";
      cout << s << endl;
    }
    
  private:
    void Private(string s) {
      s = "private";
      cout << s << endl;
    }
      public:
    void SetName(string nm) {
      name = nm;
    }
  
  protected:
    void SetAge(int a) {
      age = a;
    }
    
  private:
    string name;
    int age;
};

//add class definitions below this line
//add class definitions below this line

class Derived : protected Base {
  public:
    void ReturnPublic(string s) {
      Public(s_derived); //public function inherited from Base
    }
     void ReturnProtected(string s) {
      Protected(s_derived); //protected function inherited from Base
    }
  private:
    string s_derived;
};

//add class definitions above this line


//add class definitions above this line

int main() {
  
  //add code below this line
  
  string s_main;
  // Derived dc;
  // dc.ReturnPublic(s_main);
    // dc.ReturnProtected(s_main);
  // dc.Public(s_main);

Base bc;
bc.SetName("Peter Parker");
// Derived dc;
// dc.SetName("Peter Parker");

  //add code above this line
  
  return 0;
  
}