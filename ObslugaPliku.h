#ifndef OBSLUGA_PLIKU_H
#define OBSLUGA_PLIKU_H

#include <string>

class ObslugaPliku {
public:
    static std::string odczytajPlik(const std::string& nazwaPliku);
    static bool zapiszPlik(const std::string& nazwaPliku, const std::string& zawartosc);
};

#endif