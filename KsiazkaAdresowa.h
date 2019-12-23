#include <iostream>
#include <vector>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa{
    int idZalogowanegoUzytkownika, idOstatniegoAdresata, idUsunietegoAdresata;
    vector <Uzytkownik> uzytkownicy;

public:
    void rejestracjaUzytkownika();
};
