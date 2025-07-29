#include <iostream>
using namespace std;

int main()
{
 int nums[8] = {4,9,45,23,50,80,3,7};
 int size =8;
 int index =-1;
 int smallest = INT_MAX;
 for(int i=0; i<size; i++)
 {
  smallest = min(nums[i],smallest);
  index = i;
  
 }
 cout << index << "and" << " "<<smallest;
}