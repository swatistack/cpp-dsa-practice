#include <iostream>
using namespace std;
int changeArr(int arr[], int size)
{
 for (int i = 0; i < size; i++)
 {
  arr[i] = 2 * arr[i];
 }
 return 0;
}

int main()
{
 int arr[] = { 2,4,0,7,9,9,6,8,9 };

 changeArr(arr, 9);
 int size = sizeof(arr) / sizeof(arr[0]);

 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
}