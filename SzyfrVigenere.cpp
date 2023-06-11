#include "SzyfrVigenere.h"
#include <string>

SzyfrVigenere::SzyfrVigenere(const std::string& klucz) : klucz_(klucz) {}

std::string SzyfrVigenere::zaszyfruj(const std::string& tekst) {
    std::string zaszyfrowanyTekst;
    int dlugoscKlucza = klucz_.length();
    int index = 0;

    for (char c : tekst) {
        char litera = std::tolower(c);
        char klucz = std::tolower(klucz_[index % dlugoscKlucza]);

        if (std::isalpha(litera)) {
            char zaszyfrowanaLitera = 'a' + ((litera - 'a') + (klucz - 'a')) % 26;
            zaszyfrowanyTekst += zaszyfrowanaLitera;
            index++;
        } else {
            zaszyfrowanyTekst += litera;
        }
    }

    return zaszyfrowanyTekst;
}







