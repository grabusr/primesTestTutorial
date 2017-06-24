//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_ONTHEFLYPRIMETABLE_H
#define PRIMESCALCULATOR_ONTHEFLYPRIMETABLE_H

#include "PrimeCalculator.h"

struct primesPair
{
    primesPair();

    primesPair(int small, int big);

    int small;
    int big;
};




// Implementation #1 calculates the primes on-the-fly.
class OnTheFlyPrimeTable : public PrimeCalculator
{
public:
    virtual bool IsPrime(int n) const;

    virtual int GetNextPrime(int p) const;

    virtual  primesPair GetSmallerAndGreaterPrimes(int number) const;

    ~OnTheFlyPrimeTable() override = default;
};


#endif //PRIMESCALCULATOR_ONTHEFLYPRIMETABLE_H
