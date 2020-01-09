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
#include "PlikTekstowy.h"

using namespace std;

class AdresatMenedzer {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami, nazwaTymczasowegoPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wypiszAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsunietegoAdresata);
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

    vector <Adresat> pobierzAdresatow();
};

#endif
