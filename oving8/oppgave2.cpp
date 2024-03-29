#include <iostream>

using namespace std;

template <typename Type1,typename Type2 >
class Pair {
public:
    Type1 first;
    Type2 second;

    Pair(Type1 first_, Type2 second_) : first(first_), second(second_) {}

    Pair operator+(const Pair &other) {
        Pair point = *this;
        point.first += other.first;
        point.second += other.second;
        return point;
    }

    bool operator>(const Pair &other){
        Pair pair = *this;
        if((pair.first+pair.second) > (other.first + other.second)){ // rekner ut summen og finner ut kven som er størst
            return true;
        } else {
            return false;
        }
    }

    friend ostream &operator<<(ostream &os, const Pair &punkt) {
        return os << "(" << punkt.first << ", " << punkt.second;
    }
};

int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    if (p1 > p2)
        cout << "p1 er størst" << endl;
    else
        cout << "p2 er størst" << endl;

    auto sum = p1 + p2;
    cout << "Sum: " << sum.first << ", " << sum.second << endl;
}

