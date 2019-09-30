#include "set.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Set::Set() : tabell() {
    tabell = {};
}

Set::Set(vector<int> tabell_) : tabell(tabell_) {}

Set Set::operator+(const Set &other) const{
    Set nyttSett = *this;
    nyttSett.tabell.insert(nyttSett.tabell.end(), other.tabell.begin(), other.tabell.end());

    sort(nyttSett.tabell.begin(), nyttSett.tabell.end());
    nyttSett.tabell.erase(unique(nyttSett.tabell.begin(), nyttSett.tabell.end()), nyttSett.tabell.end());
    return nyttSett;
}

Set Set::operator+(int integer) const {
    Set nyttSett = *this;
    bool add = true;
    for(int x : nyttSett.tabell){
        if(x == integer){
            add = false;
            break;
        }
    }
    if(add){
        nyttSett.tabell.emplace_back(integer);
    }
    return nyttSett;
}

Set &Set::operator=(const Set &other) {
    tabell = other.tabell;
    return *this;
}

ostream &operator<<(ostream &out, const Set &tall) {
    out << "{";
    for(int x : tall.tabell){
        out << to_string(x) << " ";
    }
    out << "}";
    return out;
}