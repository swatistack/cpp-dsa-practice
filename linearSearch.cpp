#include <iostream>
using namespace std ;
int targetVal(int arr[], int target,int size)
{
for(int i=0; i<size; i++)
{
 if(arr[i] == target)
 return i; 
}
return -1;
}

int main()
{
 int target =8 ;
 int arr[]={2,4,0,7,9,9,6,8,9};
 int size = 8;
 int index = targetVal(arr ,target, size);
 cout << "The index value of target is " << index;
}