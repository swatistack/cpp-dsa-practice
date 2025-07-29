#include <iostream>
using namespace std;
int main()
{
  
 // int arr[5]= {2,4,5,6};
 // // arr[0]=102; 
 // int sz =sizeof(arr);
 // cout << sizeof(arr)/sizeof(int);
 // // for(int i=0; i>)
 // // loops in array
 // int size =4;
 // int marks[size];
 // for(int i=0;i<size; i++)
 // {
 //  cin >> marks[i];
 // }
 // for(int i=0; i<size; i++)
 // {
 //  cout << marks[i] <<endl;
 //  cout << sizeof(marks);
 // }
 // find smallest and largest num in arr;
 int nums[8] = {4,9,45,23,50,80,3,7};
 int small =INT_MAX;
 int largest= INT_MIN;

int size = sizeof(nums)/sizeof(int);

 for(int i=0; i<size; i++){
  if(nums[i] < small){
   small= nums[i];
   
  }
  small = min(nums[i],small);
  else if(nums[i] > largest){
   largest  = nums[i];
  }
 }
 cout << "smallest = " << small <<endl;
 cout << "largest = " << largest <<endl;
 return 0;
    }
   //  we can use min function this is predefine fucntion to write logic for small num find 
//   small = min(nums[i],small);

   