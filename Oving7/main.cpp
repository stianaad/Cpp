#include "fraction.h"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
    Fraction fraction1(9, 3);
    Fraction fracrtion2(3, 4);
    Fraction c = fraction1 - 1;
    print("c:      ", c);
    Fraction d = 1 - fraction1;
    print("d:      ", d);
}

