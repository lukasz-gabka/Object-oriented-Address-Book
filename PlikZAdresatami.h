#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami{
    string nazwaPlikuZAdresatami;

     string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
     bool czyPlikJestPusty(fstream &plikTekstowy);
public:
    PlikZAdresatami();
    void dopiszAdresataDoPliku(Adresat adresat);

};

#endif
