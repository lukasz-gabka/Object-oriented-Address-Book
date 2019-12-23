#include <iostream>
#include <vector>
#include <windows.h>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa{
    int idZalogowanegoUzytkownika, idOstatniegoAdresata, idUsunietegoAdresata;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    string wczytajLinie();

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};