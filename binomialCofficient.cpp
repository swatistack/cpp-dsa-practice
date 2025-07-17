#include <iostream>
using namespace std;
int factNum(int n)
{
 int fact=1;
 for(int i=1; i<=n; i++)
{
 fact = fact*i;
}
return fact;
}
int factNcR( int n, int r)
 {
  if(n<r) return 0;
  int factN = factNum(n);
  int factR = factNum(r);
  int factNR = factNum(n-r);
  int formula =factN/(factR*factNR);
  return formula;
 }
 int main()
{
 int n=9;
 int r= 3;
 cout << "nCr of" << " " <<n <<" "<< "and" <<" "<< r <<" :" <<factNcR(n,r);
}