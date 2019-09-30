#include <iostream>

using namespace std;

int main() {
    // oppg 1 a
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "Adressen til j: " << &j << endl;
    cout << "Adressen til pointeren til j: " << q << endl;
    cout << "Adressen til i: " << &i << endl;
    cout << "Adressen til pointeren til i: " << p << endl;

    cout << "Verdien til j: " << j << endl;
    cout << "Verdien til pointeren til j: " << *q << endl;
    cout << "Verdien til i: " << i << endl;
    cout << "Verdien til pointeren til i: " << *p << endl;

    // oppg 1 b
    *p = 7; // verdien til i blir satt lik 7
    *q += 4; // plusser verdien til j med 4, dermed får vi 5+4 = 9
    *q = *p + 1; // setter verdien til j lik verdien til p som er 7 + 1 = 8
    p = q; // setter p = q, som vil sei at den peker til det samme som q, og q peker mot j = 8
    cout << *p << " " << *q << endl; // Dette vil dermed skrive ut 8 8
}