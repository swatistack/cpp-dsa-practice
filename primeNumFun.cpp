#include <iostream>
using namespace std;
int main()
{
 int n =34;
 bool prime = true;
for(int i =2; i<n; i++)
{
 if(n%i ==0)
 {
  prime = false;
  break;
 }
 
}
if(prime)
{
 cout << n << " "<<"is a prime num";
}
else{
 cout << n << " "<< "Not a prime num";
}
return 0;
}