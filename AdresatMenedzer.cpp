#include <iostream>
#include "AdresatMenedzer.h"

using namespace std;

AdresatMenedzer::AdresatMenedzer(){
    idOstatniegoAdresata = 0;
}

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;
    string imie;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(MetodyPomocnicze::wczytajLinie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(MetodyPomocnicze::wczytajLinie()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

vector <Adresat> AdresatMenedzer::pobierzAdresatow(){
    return adresaci;
}

int AdresatMenedzer::pobierzIdOstatniegoAdresata(){
    return idOstatniegoAdresata;
}
void AdresatMenedzer::wypiszAdresatow(){
    for(int i = 0; i < adresaci.size(); i++){
        cout << adresaci[i].pobierzId() << endl;
        cout << adresaci[i].pobierzIdUzytkownika() << endl;
        cout << adresaci[i].pobierzImie() << endl;
        cout << adresaci[i].pobierzNazwisko() << endl;
        cout << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << adresaci[i].pobierzEmail() << endl;
        cout << adresaci[i].pobierzAdres() << endl << endl;
    }
    system("pause");
}

void AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika){
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}

void AdresatMenedzer::usunAdresatow(){
    adresaci.clear();
}
