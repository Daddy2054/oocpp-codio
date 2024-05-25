#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Person {
  public:
    Person(string n, string a) {
      name = n;
      address = a;
    }
  
    string GetName() {
      return name;
    }

    void SetName(string new_name) {
      name = new_name;
    }

    string GetAddress() {
      return address;
    }

    void SetAddress(string new_address) {
      address = new_address;
    }

    string Info() {
      return name + " lives at " + address + ".\n";
    }
  
  private:
    string name;
    string address;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
  
int GetAccountNumber() {
  return account_number;
}
void SetAccountNumber(int new_account_number) {
  account_number = new_account_number;
}
void SetBalance(int new_balance) {
  balance = new_balance;
}
void SetCreditLimit(int new_credit_limit) {
  credit_limit = new_credit_limit;
}
int GetBalance() {
  return balance;
}
int GetCreditLimit() {
  return credit_limit;
}
void Payment(int amount) {
  balance -= amount;
}
void Sale(int price) {
  balance += price;
}

private:
int account_number;
int balance;
int credit_limit;
};



  
  
//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////
int GetRewards() {
  return rewards;
}
void SetRewards(int new_rewards) {
  rewards = new_rewards;
}
int GetCashBack() {
  return cash_back;
}
void SetCashBack(double new_cash_back) {
  cash_back = new_cash_back;
}
void Sale(int price) {
  rewards += price * cash_back;
  SetBalance(GetBalance() + price);
}
private:
double cash_back;
  int rewards;
  
};
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  PlatinumClient pc("Sarah", "101 Main Street", 123364);
  pc.CardHolder::Sale(100);
  cout << pc.GetRewards() << endl;
  pc.Sale(100);
  cout << pc.GetRewards() << endl;
  cout << pc.GetBalance() << endl;
  pc.Payment(50);
  cout << pc.GetBalance() << endl;
  cout << pc.Info() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}