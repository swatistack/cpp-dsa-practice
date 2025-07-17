#include<iostream>
using namespace std;
int min(int a, int b)
{
 if(a<b)
 {
  return a;
 }
 else{
  return b;
 }
 // return ;
 
}
int main(){
 cout << "Min:" << min(4,5) << endl;
return 0;
}