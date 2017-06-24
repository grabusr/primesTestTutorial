//
// Created by grabusr on 24.06.17.
//

#ifndef PRIMESCALCULATOR_PRECALCULATEDPRIMETABLE_H
#define PRIMESCALCULATOR_PRECALCULATEDPRIMETABLE_H

#include "PrimeCalculator.h"

// Implementation #2 pre-calculates the primes and stores the result
// in an array.
class PreCalculatedPrimeTable : public PrimeCalculator
{
public:
    // 'max' specifies the maximum number the prime table holds.
    explicit PreCalculatedPrimeTable(int max);

    virtual ~PreCalculatedPrimeTable();

    virtual bool IsPrime(int n) const;

    virtual int GetNextPrime(int p) const;

private:
    void CalculatePrimesUpTo(int max);

    const int is_prime_size_;
    bool* const is_prime_;

    // Disables compiler warning "assignment operator could not be generated."
    void operator=(const PreCalculatedPrimeTable& rhs);
};


#endif //PRIMESCALCULATOR_PRECALCULATEDPRIMETABLE_H
