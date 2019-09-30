#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    //a
    cout << "Skriv inn tre ord" << endl;
    string word1, word2, word3;
    cin >> word1;
    cin >> word2;
    cin >> word3;
    //b
    string sentence = word1 + " " + word2 + " " + word3 +".";
    cout << sentence << endl;
    //c
    cout << "Lengden til det første ordet: " << word1.size() << endl;
    cout << "Lengden til det andre ordet: " << word2.size() << endl;
    cout << "Lengden til det tredje ordet: " << word3.size() << endl;
    cout << "Lengden til sentence: " << sentence.size() << endl;
    //d
    string sentence2 = sentence;
    //e
    string replace = "xxx";
    if(sentence2.size() >=11) {
        sentence2.replace(9,replace.size(), replace);
    } else {
        cout << "Ordet var for kort!" << endl;
    }
    cout << "Sentence: " << sentence << endl;
    cout << "Sentence2: " << sentence2 << endl;
    //f
    string sentence_start;
    if(sentence.size() >=5) {
        sentence_start =  sentence.substr(0, 5);
    } else {
        cout << "Ordet var for kort!" << endl;
    }
    cout << "Sentence: " << sentence << endl;
    cout << "Sentence_start: " << sentence_start << endl;
    //g
    string hallo = "hallo";
    if (sentence.find(hallo) != string::npos) {
        cout << "Sentence inneholder hallo!" << '\n';
    } else {
        cout << "Sentence inneholder ikkje hallo" << endl;
    }
    //h
    regex re("re");
    cout << "Antall 're': " << distance(sregex_iterator(sentence.begin(),sentence.end(), re),sregex_iterator());
    return 0;
}

