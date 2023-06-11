#include "Rdzen.h"
#include "Interfejs.h"
#include "ObslugaPliku.h"
#include "SzyfrCezara.h"
#include "SzyfrPodstawieniowy.h"
#include "SzyfrGaderypoluki.h"
#include "SzyfrVigenere.h"

void Rdzen::uruchom() {
    std::string wiadomosc;
    wiadomosc = ObslugaPliku::odczytajPlik("wiadomosc.txt");

    Interfejs::wyswietlMenu();
    int wybor = Interfejs::pobierzWybor();
    Szyfr* szyfr = nullptr;
    switch (wybor) {
        case 1:
            Interfejs::wyswietlKomunikat("Podaj przesuniecie szyfru cezara: ");
            szyfr = new SzyfrCezara(Interfejs::pobierzWiadomosc());
            break;
        case 2:
            Interfejs::wyswietlKomunikat("Podaj klucz składaący się z wszystkich znakow alfabetu lacinskiego szyfru podstawieniowego: ");
            szyfr = new SzyfrPodstawieniowy(Interfejs::pobierzWiadomosc());
            break;
        case 3:
            szyfr = new SzyfrGaderypoluki();
            break;
        case 4:
            Interfejs::wyswietlKomunikat("Podaj klucz składaący się z małych liter alfabetu: ");
            szyfr = new SzyfrVigenere(Interfejs::pobierzWiadomosc());
            break;

        default:
            Interfejs::wyswietlKomunikat("Nieprawidłowy wybór szyfru.");
            return;
    }

    std::string zaszyfrowanaWiadomosc = szyfr->zaszyfruj(wiadomosc);

    ObslugaPliku::zapiszPlik("zaszyfrowana_wiadomosc.txt", zaszyfrowanaWiadomosc);

    Interfejs::wyswietlKomunikat("Wiadomość została zaszyfrowana i zapisana do pliku: zaszyfrowana_wiadomosc.txt");
}