#include "functions.h"
#include <iostream>
using std::cin;
using std::cout;

int main() {
    int x {};
    cin >> x;

    cout << isPrime(x) << "\n";

    cout << x << "\n";

    cout << is2MorePrime(x) << "\n";

    cout << x << "\n";
}
