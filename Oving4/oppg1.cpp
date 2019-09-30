#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> vektor = {1.3, 2.0, 3.2, 4.2, 5.3};
    double first = vektor.front();
    cout <<"Første tallet: " << first << endl;

    double last = vektor.back();
    cout <<"Siste tallet: " << last << endl;

    vektor.emplace(vektor.begin()+1, 100.1); // setter inn et element på indeks 1.
    double first2 = vektor.front(); //Når eg skriver front() etter eg har satt inn så får eg fortsatt det første tallet
    cout <<"Første2 tallet: " << first2 << endl;

    vector<double>::iterator it = find(vektor.begin(), vektor.end(), 100.1);
    if(it != vektor.end()) {
        cout << "Resultatet er: " << *it << endl;
    } else {
        cout << "Fant ikke det du søkte ette" << endl;
    }
}