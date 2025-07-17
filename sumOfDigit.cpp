#include <iostream>
using namespace std;
int sumDigit(int num)
{
 int sum =0;
 int digit =0;
 while(num>0)
 {
  digit = num%10;
  sum =sum+digit;
  num =num/10;
 }
 return sum;

}
int main()
{
 int num = 234;
 cout << "Sum of Digit: " << num <<"is:"  << sumDigit(num) <<endl;
}
