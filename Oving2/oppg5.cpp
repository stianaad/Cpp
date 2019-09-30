#include <iostream>

using namespace std;

int main() {
    double number = 1;
    double *pointer = &number;
    double &ref = number;

    *pointer = 2;
    cout <<"Ny verdi: " << *pointer << endl;

    ref = 3;
    cout <<"Ny verdi: " << ref << endl;

    pointer[0] = 4;
    cout <<"Ny verdi: " << *pointer << endl;
}
