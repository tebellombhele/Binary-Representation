#include <iostream>
#include <cmath>

using namespace std;

int convertBinToDec(long long);

int main()
{
    long long n;
    cout << "Enter a Binary Number: ";
    cin >> n;
    cout << n << " in binary = " << convertBinToDec(n) << " in decimal";
    return 0;
}

int convertBinToDec(long long n)
{
    int DecNumber = 0, i = 0, remainder;
    while (n!= 0)
    {
        remainder = n % 10;
        n /= 10;
        DecNumber += remainder*pow(2,i);
        ++i;
    }
    return DecNumber;
}
