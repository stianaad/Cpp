#include <vector>

using namespace std;

class Set{
public:
    vector<int> tabell;

    Set();
    Set(vector<int> tabell_);
    Set operator+(const Set &other) const;
    Set operator+(int integer) const;
    Set &operator=(const Set &other);

};

ostream &operator<<(ostream &out,const Set &tall);