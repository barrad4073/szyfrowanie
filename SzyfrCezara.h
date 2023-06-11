#ifndef SZYFRCEZARA_H
#define SZYFRCEZARA_H

#include <string>
#include "Szyfr.h"

class SzyfrCezara : public Szyfr{
private:
    std::string przesuniecie;
public:
    SzyfrCezara(const std::string& przesuniecie);
    std::string zaszyfruj(const std::string& wiadomosc) override;
};

#endif