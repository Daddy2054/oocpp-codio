#include <iostream>
#include <iomanip>
using namespace std;

// add class definitions below this line

class Atm
{
public:
  Atm()
  {
  }

  void Deposit(double m)
  {
    if (m > 0)
    {
      money += m;
    }
    else
    {
      cout << "You cannot deposit a negative or 0 amount of money." << endl;
    }
  }

  void Withdraw(double m)
  {
    if (m <= 0)
    {
      cout << "You cannot withdraw a negative or 0 amount of money." << endl;
    }
    else if (money < m)
    {
      cout << "You do not have enough funds to withdraw that amount." << endl;
    }
    else
    {
      money -= m;
    }
  }

  double GetMoney()
  {
    return money;
  }

private:
  double money;
};

// add class definitions above this line

int main()
{

  // DO NOT EDIT CODE BELOW THIS LINE

  Atm my_atm;
  my_atm.Deposit(-10);
  my_atm.Deposit(100.02);
  my_atm.Withdraw(-20);
  my_atm.Withdraw(200);
  my_atm.Withdraw(50.22);
  cout << fixed;           // prevents value from being truncated or rounded
  cout << setprecision(2); // sets value to 2 decimal places
  cout << my_atm.GetMoney() << endl;

  // DO NOT EDIT CODE ABOVE THIS LINE

  return 0;
}
