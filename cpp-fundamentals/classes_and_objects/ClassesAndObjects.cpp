#include "Person.h"
#include "Tweeter.h"

int main() {
    Person p1 {"Kate", "Gregory", 123}; {
        Tweeter t1 {"Someone", "else", 456, "@someoneElse"};
        Person p2;
    }
    std::string name = p1.getName();

    return 0;
}