#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line

class Median{
  public:
  double CalculateMedian(int a, int b){
    return (double) (a+b)/2;
  }

  int CalculateMedian(int a, int b, int c){
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    return v[1];
  }
  double CalculateMedian(int a, int b, int c, int d){
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(), v.end());
    return (double) (v[1]+v[2])/2;
  }
    int CalculateMedian(int a, int b, int c, int d, int e){
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    sort(v.begin(), v.end());
    return v[2];
  }
};


// solution
// class Median {
//   public:
//     double CalculateMedian(int n1, int n2) {
//       return (double) (n1 + n2) / 2;
//     }
  
//     double CalculateMedian(int n1, int n2, int n3) {
//       vector<int> nums = {n1, n2, n3};
//       sort(nums.begin(), nums.end());
//       return nums.at(1);
//     }

//     double CalculateMedian(int n1, int n2, int n3, int n4) {
//       vector<int> nums = {n1, n2, n3, n4};
//       sort(nums.begin(), nums.end());
//       return (double) (nums.at(1) + nums.at(2)) / 2;
//     }

//     double CalculateMedian(int n1, int n2, int n3, int n4, int n5) {
//       vector<int> nums = {n1, n2, n3, n4, n5};
//       sort(nums.begin(), nums.end());
//       return nums.at(2);
//     }
// };
//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
