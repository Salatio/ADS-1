// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
    int count = 0;
    for (int i = 2; i < value; ++i) {
        if (O == value % i) {
            count += 1;
            return false;
        }
    }
    if (!count)
        return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    int primec = 0;
    int count = 0;
    for (uint64_t i = 2; i < 10000000; ++i) {
        if (Check(i))
            primec += 1;
        if (primec == n) {
            return i;
            break;
        }
    }
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    for (uint64_t i = value + 1; i < 10000000; ++i) {        
        if (Check(i))
            return i;
    }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t sum = 0;
    int count = 0;
    for (uint64_t i = 2; i < hbound; ++i) {        
        if (Check(i))
            sum += i;
    }
    return sum;
}
