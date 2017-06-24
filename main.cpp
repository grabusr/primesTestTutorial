#include <iostream>

#include "app/OnTheFlyPrimeTable.h"

using namespace std;

int main()
{
    OnTheFlyPrimeTable calculator;

    int a = 2;

    cout << "Następna liczba pierwsza po ";
    cout << a;
    cout << " to " << calculator.GetNextPrime(a) << endl;
    return 0;
}