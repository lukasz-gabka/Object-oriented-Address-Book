#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer();
    int dodajAdresata(int idZalogowanegoUzytkownika);
    vector <Adresat> pobierzAdresatow();
    int pobierzIdOstatniegoAdresata();
    void wypiszAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunAdresatow();
    void wyswietlWszystkichAdresatow();
};

#endif
