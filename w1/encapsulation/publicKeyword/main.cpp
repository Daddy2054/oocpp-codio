#include <iostream>
using namespace std;

//add class definitions below this line
    //add class definitions below this line
    
class Phone {
  public:
    Phone(string mo, int st, int me) {
      model = mo;
      storage = st;
      megapixels = me;
    }
  
    void Describe() {
      cout << "My " << storage << " gig " << model;
      cout << " has a " << megapixels << " megapixels camera." << endl;
    }
  
  private:
    string model;
    int storage;
    int megapixels;
};

//add class definitions above this line


//add class definitions above this line


int main() {
  
  //add code below this line
  
  
  Phone my_phone("iPhone", 256, 12);
  my_phone.Describe();

  //add code above this line
  
  return 0;
  
}