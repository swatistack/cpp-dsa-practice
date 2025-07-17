#include<iostream>
using namespace std;
int main()
{
 // int num;
 // cout << "Enter a number";
 // cin>> num;
 // for(int i=0; i<num; i++)
 // {
 //  for(int j =0; j<num-1-i; j++)
 //  {
 //   cout <<" ";
 //  }
 //  for(int k=0; k<=i; k++)
 //  {
 //   cout << k+1 ;
 //  }
 //  for(int j=i; j>0; j--)
 //  {
 //   cout<< j;
 //  }
 //  cout << endl;
 // }
 int n =5;
 for(int i= 0; i<n; i++)
 {
  for(int j=i; j<n-1; j++)
  {
   cout << " ";
  }
  cout << "*";
   if(i!=0)
   {
      for(int j=0; j<2*i-1; j++)
       {
        cout << " ";
        }
  cout << "*";

   }
 cout <<endl;

 }
 for(int i=0; i<n-1; i++)
 {
  for(int j=0; j<=i;j++)
  {
 cout << " ";
  }
  cout << "*";
  if(i!=n-2)
  {
    for(int j=0; j<2*(n-i)-5; j++)
  {
   cout << " ";
  }
   cout << "*";
  
  }
  
  cout<< endl;

 }
}