#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    // oppg A
    /*cout << "Du skal skrive inn 5 temperaturer" << endl; // Kommenter B når du kjører A
    int belowTen = 0;
    int bewteenTenAndTwenty = 0;
    int overTwenty = 0;
    string input;
    const int length = 5;
    for(int i=0 ; i<length; i++) {
        cout << "Temperatur nr " << i+1 << ": "<< endl;
        cin >> input;
        int answer = stoi(input);
        if (answer < 10) {
            belowTen++;
        } else if (answer >=10 && answer <= 20) {
            bewteenTenAndTwenty++;
        } else {
            overTwenty++;
        }
    }

    cout << "Antall under 10 er: " << belowTen << endl;
    cout << "Antall mellom 10 og 20 er: " << bewteenTenAndTwenty << endl;
    cout << "Antall over 20 er: " << overTwenty << endl;*/

    //oppg B
    const int length = 5; // kommenter B når du kjøre A
    double temperatures[10]; // setter denne litt større i tilfelle det skulle vært flere tall i filen

    read_temperatures(temperatures, length);

    return 0;
}

void read_temperatures(double temperatures[], int length) {
    const char filename[] = "/Users/stian/CLionProjects/Oving1/numbers.txt";
    ifstream file;       // definerer filvariabel
    file.open(filename); // åpner filen
    if (!file) {         // innfil kan brukes som et logisk uttrykk
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE); // uthopp fra programmet
    }

    int number;
    int teller = 0;
    while (file >> number) { // leser fram til filslutt
        temperatures[teller] = number;
        teller++;
    }
    file.close();
    int belowTen = 0;
    int bewteenTenAndTwenty = 0;
    int overTwenty = 0;
    for (int i=0; i<length; i++) {
        if (temperatures[i] < 10) {
            belowTen++;
        } else if (temperatures[i] >= 10 && temperatures[i] <= 20) {
            bewteenTenAndTwenty++;
        } else {
            overTwenty++;
        }
    }
    cout << "Antall under 10 er: " << belowTen << endl;
    cout << "Antall mellom 10 og 20 er: " << bewteenTenAndTwenty << endl;
    cout << "Antall over 20 er: " << overTwenty << endl;
}