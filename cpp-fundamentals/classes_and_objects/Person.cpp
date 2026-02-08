#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary) {
    std::cout << "constructing " << getName() << "\n";
}

Person::Person() : arbitrarynumber(0) {
    std::cout <<"constructing " << firstname << " " << lastname << "\n";
}

Person::~Person() {
    std::cout << "destructing " << firstname << " " << lastname << "\n";
}

std::string Person::getName() {
    return firstname + " " + lastname;
}

bool Person::operator<(Person const& p) const {
    return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const {
    return arbitrarynumber < i;
}

bool operator<(int i, Person const& p) {
    return i < p.getNumber();
}