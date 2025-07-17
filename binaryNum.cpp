#include <iostream>
using namespace std;

int numToBinary(int num)
{
int pow = 1; int ans =0;
while(num>0)
{
 int rem = num%2;
  num/=2;
 ans+=(rem*pow);
 pow*=10;
} 
return ans;
} 
int main()
{
 int num =5;
 for(int i=1; i<=10; i++)
 {
 cout << numToBinary(i) <<endl;
 }
 return 0;
}