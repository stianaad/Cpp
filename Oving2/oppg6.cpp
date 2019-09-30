#include <iostream>

using namespace std;

void find_sum(const int *table, int length);

int main() {
    int length = 20;
    int tabell[length];
    for (int i=0; i<length; i++) {
        tabell[i] = i+1;
    }
    find_sum(tabell, length);
}

void find_sum(const int *table, int length) {
    int firstTen = 0;
    int nextFive = 0;
    int lastFive = 0;

    for (int i=0; i < length; i++) {
        if(*table <=10) {
            firstTen += *table;
        } else if(*table > 10 && *table <=15) {
            nextFive += *table;
        } else {
            lastFive += *table;
        }
        table++;
    }
    cout <<"Summen av de første 10: " << firstTen << endl;
    cout <<"Summen av de neste 5: " << nextFive << endl;
    cout <<"Summen av de siste 5: " << lastFive << endl;
}


