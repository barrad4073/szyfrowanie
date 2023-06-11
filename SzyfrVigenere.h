#ifndef SZYFRVIGENERE_H
#define SZYFRVIGENERE_H

#include <string>
#include "Szyfr.h"

class SzyfrVigenere : public Szyfr {
public:
    SzyfrVigenere(const std::string& klucz);

    std::string zaszyfruj(const std::string& tekst) override;

private:
    std::string klucz_;
};

#endif // SZYFRVIGENERE_H