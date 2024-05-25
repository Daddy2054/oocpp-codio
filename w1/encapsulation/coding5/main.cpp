#include <iostream>
using namespace std;

// add class definitions below this line

class CardBinder
{
public:
  CardBinder()
  {
  }

  void AddGold(int gold)
  {
    if (gold <= 0)
    {
      cout << "You cannot add a negative or 0 amount of cards." << endl;
    }
    else if (GetTotal() + gold > 20)
    {
      cout << "You do not have enough binder room." << endl;
    }
    else
    {
      gold_card += gold;
    }
  }

  void AddSilver(int silver)
  {
    if (silver <= 0)
    {
      cout << "You cannot add a negative or 0 amount of cards." << endl;
    }
    else if (GetTotal() + silver >= 20)
    {
      cout << "You do not have enough binder room." << endl;
    }
    else
    {
      silver_card += silver;
    }
  }

  void RemoveGold(int gold)
  {
    if (gold <= 0)
    {
      cout << "You cannot remove a negative or 0 amount of cards." << endl;
    }
    else if (gold_card < gold)
    {
      cout << "You do not have enough gold cards to remove." << endl;
    }
    else
    {
      gold_card -= gold;
    }
  }

  void RemoveSilver(int silver)
  {
    if (silver <= 0)
    {
      cout << "You cannot remove a negative or 0 amount of cards." << endl;
    }
    else if (silver_card < silver)
    {
      cout << "You do not have enough gold cards to remove." << endl;
    }
    else
    {
      silver_card -= silver;
    }
  }

  int GetGold()
  {
    return gold_card;
  }

  int GetSilver()
  {
    return silver_card;
  }

  int GetTotal()
  {
    return gold_card + silver_card;
  }

private:
  int gold_card = 0;
  int silver_card = 0;
};

// add class definitions above this line

int main()
{

  // DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;

  // DO NOT EDIT CODE ABOVE THIS LINE

  return 0;
}
