#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "MetodyPomocnicze.h"
#include "Uzytkownik.h"

using namespace std;

class PlikZUzytkownikami{

    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI): nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI) {};
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    string pobierzNazwePlikuZUzytkownikami();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> uzytkownicy);
};

#endif
