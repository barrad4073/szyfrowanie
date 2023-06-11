#include "SzyfrPodstawieniowy.h"

SzyfrPodstawieniowy::SzyfrPodstawieniowy(const std::string& klucz) : klucz(klucz) {}

std::string SzyfrPodstawieniowy::zaszyfruj(const std::string& wiadomosc) {
    std::string zaszyfrowanaWiadomosc = "";
    int dlugosc = wiadomosc.length();

    for (int i = 0; i < dlugosc; ++i) {
        if (isalpha(wiadomosc[i])) {
            char znak = std::tolower(wiadomosc[i]);
            char zaszyfrowanyZnak = klucz[znak - 'a'];
            zaszyfrowanaWiadomosc += zaszyfrowanyZnak;
        } else {
            zaszyfrowanaWiadomosc += wiadomosc[i];
        }
    }

    return zaszyfrowanaWiadomosc;
}