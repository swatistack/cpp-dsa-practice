#include <iostream>
using namespace std;
int main() {
  int arr[] = {0, 2, 4, 6};
  int res = 0;
  for (auto x : arr) {
    if (x < 5) {
      res += x;
    }
  }
  cout << res;
}
// int main()
// {
//  double prices[]={23.5,35.0,789.9,78};
//  for(double x :prices)
//  {
// cout << x <<endl;
//  }
//  return 0;

//  int arr[] = {0, 2, 4, 6};
// int res = 0;
// for(auto x: arr) {
//   if(x < 5) {
//     res += x;
//   }
// }
// cout << res;
// }
