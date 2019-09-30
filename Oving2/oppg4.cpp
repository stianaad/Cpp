using namespace std;

int main() {
    int a = 5;
    int &b = a;    //int &b; Dette vil ikke fungere fordi når vi skriver & på venstresiden så skriver vi at int &b skal være en et annet navn på en variabel. Men vi setter den ikke lik en variabel
    int *c;
    c = &b;
    a = b + *c; //*b vil ikke fungere fordi b er ikke en peker, men er en referanse til a. *b betyr at vi vil ha verdien til pekeren, men dersom vi vil ha verdien til b skriver vi bare 'b'
        //*a går heller ikke fordi den er allerede deklarert til int a = 5, og vi kan ikke endre den til en pointer.
   b = 2; // det går ikke ann å sette en ny referanse når &b allerede er satt lik 2.
}
