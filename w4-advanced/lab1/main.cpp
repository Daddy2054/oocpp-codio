//#include <iostream>
//using namespace std;
#include "class.h"

int main() {
  
  //add code below this line

  Farewell f("Goodbye world");
  cout << f.GetFarewell() << endl;
  f.SetFarewell("Bye world");
  cout << f.GetFarewell() << endl;

  //add code above this line
  
  return 0;
  
}