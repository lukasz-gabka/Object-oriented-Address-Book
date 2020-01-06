#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy {
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPlikuZAdresatami): NAZWA_PLIKU(nazwaPlikuZAdresatami) {};
    bool czyPlikJestPusty(fstream &plikTekstowy);

    string pobierzNazwePliku();
};

#endif
