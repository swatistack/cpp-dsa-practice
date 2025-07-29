#include <iostream>
using namespace std;
int main() {
  // int num = 87;
  // int *p = &num;
  // *p = 9;
  // cout << num;
  // int a = 4;
  // int *p = &a;
  // a += 2;
  // *p += 3;
  // a -= 1;
  // cout << a;
  int arr[] = {2, 3, 4, 5, 4};
  int *p = arr; 
  cout << *p;
  cout << *(p + 1) << endl;
  cout << *(p + 2) << endl;
  cout << *(p + 3) << endl;
  // int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr;
cout << arr[2];

}