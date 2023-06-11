#ifndef SZYFR_H
#define SZYFR_H

#include <string>

// Klasa bazowa reprezentująca szyfr
class Szyfr {
public:
    virtual std::string zaszyfruj(const std::string& wiadomosc) = 0;
};

#endif