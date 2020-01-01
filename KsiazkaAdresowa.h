#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    char wybor;

    char wczytajZnak();

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami): uzytkownikMenedzer(nazwaPlikuZUzytkownikami){
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int pobierzIdZalogowanegoUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char pobierzWybor();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    char wybierzOpcjeZMenuUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

    void wypiszAdresatow();
};

#endif
