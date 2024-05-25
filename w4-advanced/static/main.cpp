#include <iostream>
using namespace std;

//add class definitions below this line

class Player {
  public:
    Player() {
      health = 100;
      score = 0;
    }
    void PrintLevel() {
      cout << level << endl;
    }
    static int ChangeLevel(int change) { //define static function
      level = change;
      return level;
    }
  
  private:
    int health;
    int score;
    static int level; //declare static variable
};

//add class definitions above this line

int Player::level = 0; //initalize static variable globally

int main() {
  
  //add code below this line

  Player mario;
  mario.PrintLevel(); //calling class function, object required
  cout << Player::ChangeLevel(5) << endl; //calling static function, object not needed
  //   Player mario;
  // mario.PrintLevel();
  // cout << Player::ChangeLevel(6) << endl;
  Player luigi;
  luigi.PrintLevel();
  //add code above this line
  
  return 0;
  
}