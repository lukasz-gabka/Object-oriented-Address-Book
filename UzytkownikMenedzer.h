#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer {
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
        idZalogowanegoUzytkownika = 0;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    bool czyUzytkownikJestZalogowany();

    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    int pobierzIdZalogowanegoUzytkownika();
};

#endif
