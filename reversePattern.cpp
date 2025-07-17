#include<iostream>
using namespace std;
int main()
{
 int n= 4;
 char ch= 'A';
 for(int i=0; i<n;i++)
 {
  for(int j=0; j<i;j++)
  {
   cout<< " " ;
  }

  for(int k=0 ;k<n-i; k++)
  {
   cout << ch <<"" ;

  }
   ch++;
   cout<< endl;

 }
// for(int i= 0; i<n; i++)
// {
//  for(int j=0; j<i;j++)
//  {
//   cout<< " ";
//  }
//  for(int k=0; k<n-i; k++)
//  {
//   cout << (i+1) <<"";
//  }
//  cout << endl;
// }
 // char ch ='A';
 // for(int i= 0; i<n;i++)
 // {
 //  for(int j=i+1; j>0; j--)
 //  {
 //   cout << ch <<" ";
 //   ch++;
 //  }
 //  cout<< endl;
 // }
 // int n;
 // cout << "Enetr the number";
 // cin>> n;
 // int num =1;
 // for(int i=0; i<n;i++){
 //  for(int j=i+1; j>0;j--)
 //  {
 //   cout<< num <<" ";
 //   num++;
 //  }
  
 //  cout<< endl;
 // }
}
// REVERSE PATTERN
// int main()

// {
//  int n;
//  cout << "Enetr the number";
//  cin>> n;
//  for(int i=0; i<n;i++){
//   for(int j=i+1; j>0;j--)
//   {
//    cout<< j <<" ";
//   }
//   cout<< endl;
//  }
// }