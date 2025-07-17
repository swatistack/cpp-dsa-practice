#include <iostream>
using namespace std;
int factOfNum(int n)
{
int fact = 1;
for(int i=1; i<=n; i++)
{
 fact = fact*i;
}
 return fact;

}
int main()
{
 cout << "Factorial of number=" <<factOfNum(4) <<endl;
 return 0;
}