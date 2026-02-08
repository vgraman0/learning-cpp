#include <string>
using std::string;
#include <iostream>
using std::cout;

template <class T> 
T max(T const& t1, T const& t2) {
    return t1 < t2 ? t2 : t1;
}


class Person {
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

    public:
        Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary) {};
        int getNumber() const {return arbitrarynumber;}
        bool operator<(Person const& p) const {return arbitrarynumber < p.arbitrarynumber;}
};

int main() {
    cout << "max of 33 and 34 is" << max(33, 34) << "\n\n";

    Person p1 {"vishal", "raman", 25};
    Person p2 {"ganesh", "venkataraman", 52};

    cout << max(p1, p2).getNumber() << "\n";
}