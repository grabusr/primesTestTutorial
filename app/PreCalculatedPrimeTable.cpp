//
// Created by grabusr on 24.06.17.
//

#include "PreCalculatedPrimeTable.h"

// 'max' specifies the maximum number the prime table holds.
PreCalculatedPrimeTable::PreCalculatedPrimeTable(int max) : is_prime_size_(max + 1),
                                                            is_prime_(new bool[max + 1])
{
    CalculatePrimesUpTo(max);
}

PreCalculatedPrimeTable::~PreCalculatedPrimeTable()
{
    delete[] is_prime_;
}

bool PreCalculatedPrimeTable::IsPrime(int n) const
{
    return 0 <= n && n < is_prime_size_ && is_prime_[n];
}

int PreCalculatedPrimeTable::GetNextPrime(int p) const
{
    for (int n = p + 1; n < is_prime_size_; n++) {
        if (is_prime_[n]) return n;
    }

    return -1;
}

void PreCalculatedPrimeTable::CalculatePrimesUpTo(int max)
{
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;

    for (int i = 2; i <= max; i++) {
        if (!is_prime_[i]) continue;

        // Marks all multiples of i (except i itself) as non-prime.
        for (int j = 2 * i; j <= max; j += i) {
            is_prime_[j] = false;
        }
    }
}

// Disables compiler warning "assignment operator could not be generated."
//void operator=(const PreCalculatedPrimeTable& rhs);