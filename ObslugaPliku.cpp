//
#include "ObslugaPliku.h"
#include <iostream>
#include <fstream>

std::string ObslugaPliku::odczytajPlik(const std::string& nazwaPliku) {
    std::ifstream plik(nazwaPliku);
    if (!plik.is_open()) {
        std::cerr << "Nie można otworzyć pliku: " << nazwaPliku << std::endl;
        return "";
    }

    std::string zawartosc;
    std::getline(plik, zawartosc);
    plik.close();

    return zawartosc;
}

bool ObslugaPliku::zapiszPlik(const std::string& nazwaPliku, const std::string& zawartosc) {
    std::ofstream plik(nazwaPliku);
    if (!plik.is_open()) {
        std::cerr << "Nie można otworzyć pliku: " << nazwaPliku << std::endl;
        return false;
    }

    plik << zawartosc;
    plik.close();

    return true;
}