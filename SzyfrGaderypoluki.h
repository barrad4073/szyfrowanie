#ifndef SZYFRGADERYPOLUKI_H
#define SZYFRGADERYPOLUKI_H

#include <string>
#include "Szyfr.h"

class SzyfrGaderypoluki : public Szyfr {
public:
    SzyfrGaderypoluki();
    std::string zaszyfruj(const std::string& tekst) override;
};

#endif