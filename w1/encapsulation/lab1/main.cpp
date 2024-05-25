#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Words {
  public:
    Words(vector<string>& n){
      list_of_words = n;
    }
  
    void CoutStrings() {
       vector<int> vowel_sizes;
       int size;
       for (auto a : list_of_words) {
         size = CountVowels(a, a.length());
         vowel_sizes.push_back(size);
       }
       for (int i = 0; i < vowel_sizes.size(); i++) {
         if (i == vowel_sizes.size()-1) {
           cout << vowel_sizes.at(i) << endl;
         }
         else {
           cout << vowel_sizes.at(i) << ',';
         }
       }
     }
   void CoutStrings2() {
       vector<int> counts;
       int size;
       for (auto a : list_of_words) {
         size = CountNonVowels(a, a.length());
         counts.push_back(size);
       }
       for (int i = 0; i < counts.size(); i++) {
         if (i == counts.size()-1) {
           cout << counts.at(i) << endl;
         }
         else {
           cout << counts.at(i) << ',';
         }
       }
     }
  private:
    vector<string> list_of_words;
  
    bool IsVowel(char ch) {
      ch = toupper(ch);
      return (ch=='A' || ch=='E' || ch=='I' ||
              ch=='O' || ch=='U');
    }

    int CountVowels(string str, int n) {
      if (n == 1) {
        return IsVowel(str[n-1]);
      }
      return CountVowels(str, n-1) + IsVowel(str[n-1]);
    }
        bool IsNonVowel(char ch) {
      ch = toupper(ch);
      return !(ch=='A' || ch=='E' || ch=='I' ||
               ch=='O' || ch=='U');
    }

    int CountNonVowels(string str, int n) {
      if (n == 1) {
        return IsNonVowel(str[n-1]);
      }
      return CountNonVowels(str, n-1) + IsNonVowel(str[n-1]);
    }
};

//add class definitions above this line


int main() {
  
  //add code below this line
  
    vector<string> list = {"house", "cake", "pancake"};
    Words vowels(list);
    vowels.CoutStrings();
    Words nonvowels(list);
    nonvowels.CoutStrings2();
  //add code above this line
  
  return 0;
  
}