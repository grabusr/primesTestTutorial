//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_PRIMECALCULATOR_H
#define PRIMESCALCULATOR_PRIMECALCULATOR_H

#include <algorithm>

// The prime table interface.
class PrimeCalculator {
public:
    virtual ~PrimeCalculator() = default;

    // Returns true iff n is a prime number.
    virtual bool IsPrime(int n) const = 0;

    // Returns the smallest prime number greater than p; or returns -1
    // if the next prime is beyond the capacity of the table.
    virtual int GetNextPrime(int p) const = 0;
};





#endif //PRIMESCALCULATOR_PRIMECALCULATOR_H
