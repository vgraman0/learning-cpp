#include <iostream>
using std::cout;
using std::cin;

#include "functions.h"

bool isPrime(int x) {
    bool prime = true;
    for (int i = 2; i <= x/i; i++) {
        int factor = x/i;
        if (factor * i == x) {
            prime = false;
            break;
        }
    }

    return prime;
}

bool is2MorePrime(int const& x) {
    return isPrime(x + 2);
}