#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "AdresatMenedzer.h"

using namespace std;

class UzytkownikMenedzer{
    int idZalogowanegoUzytkownika;
    PlikZUzytkownikami plikZUzytkownikami;
    AdresatMenedzer adresatMenedzer;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami): plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();

    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    int pobierzIdZalogowanegoUzytkownika();
};

#endif
