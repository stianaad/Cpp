#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    if(a == b) {
        cout << setprecision(10) << a << " er lik " << b << endl;
        return true;
    } else {
        cout << setprecision(10) << a << " er ikkje lik " << b << endl;
        return false;
    }
}

bool equalDesimal(double a, double b) {
    double toleranse = 0.00001;
    if(abs(a-b) < toleranse) {
        cout << setprecision(10) << a << " er lik " << b << endl;
        return true;
    } else {
        cout << setprecision(10) << a << " er ikkje lik " << b << endl;
        return false;
    }
}

int main() {
    int a = 1;
    int b = 1;
    equal(a,b);

    string tekstA = "hei";
    string tekstB = "heia";
    equal(tekstA,tekstB);

    double d1 = 2.5;
    double d2 = 2.5123456789;
    equalDesimal(d1, d2);

    double d3 = 2.500001;
    equalDesimal(d1, d3);
}