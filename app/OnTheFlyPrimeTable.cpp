//
// Created by grabusr on 24.06.17.
//

#include "OnTheFlyPrimeTable.h"

bool OnTheFlyPrimeTable::IsPrime(int n) const {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        // n is divisible by an integer other than 1 and itself.
        if ((n % i) == 0) return false;
    }

    return true;
}

int OnTheFlyPrimeTable::GetNextPrime(int p) const {
    for (int n = p + 1; n > 0; n++) {
        if (IsPrime(n)) return n;
    }

    return -1;
}

primesPair OnTheFlyPrimeTable::GetSmallerAndGreaterPrimes(int number) const {
    return {-1, -1};
}
