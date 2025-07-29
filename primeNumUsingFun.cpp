#include <iostream>
using namespace std;

int primeNum(int num)
{
    bool isPrime = true;

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}

int main()
{
    int num = 56;
    primeNum(num);
    double prices[] = {5.99, 3.2, 9.99, 29.99};

    cout << prices[2];

    return 0;
}

// #include <iostream>
// using namespace std;


    