#include <iostream>
using namespace std;

//add class definitions below this line
//add class definitions below this line

class PrivateExample {
  public:
    PrivateExample(int n) {
      num = n;
    }
  
    void PublicFunction() {
      PrivateFunction();
    }
  
  private:
    int num;
  
    void PrivateFunction() {
      cout << "The double of " << num << " is: " << num * 2 << endl;
      cout << num << " squared is: " << num * num << endl;
    }
};

//add class definitions above this line


//add class definitions above this line


int main() {
  
  //add code below this line
  
  PrivateExample my_example(5);
  my_example.PublicFunction();


  //add code above this line
  
  return 0;
  
}