#include "SzyfrCezara.h"
SzyfrCezara::SzyfrCezara(const std::string& przesuniecie) : przesuniecie(przesuniecie) {}

std::string SzyfrCezara::zaszyfruj(const std::string& wiadomosc) {
    std::string zaszyfrowanaWiadomosc = "";
    int dlugosc = wiadomosc.length();

    for (int i = 0; i < dlugosc; ++i) {
        if (isalpha(wiadomosc[i])) {
            char znak = std::tolower(wiadomosc[i]);
            char zaszyfrowanyZnak = (znak + std::stoi(przesuniecie) - 'a') % 26 + 'a';
            zaszyfrowanaWiadomosc += zaszyfrowanyZnak;
        } else {
            zaszyfrowanaWiadomosc += wiadomosc[i];
        }
    }

    return zaszyfrowanaWiadomosc;
}






