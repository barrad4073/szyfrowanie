#ifndef SZYFRPODSTAWIENIOWY_H
#define SZYFRPODSTAWIENIOWY_H

#include "Szyfr.h"

class SzyfrPodstawieniowy : public Szyfr {
private:
    std::string klucz;

public:
    SzyfrPodstawieniowy(const std::string& klucz);
    std::string zaszyfruj(const std::string& wiadomosc) override;
};

#endif
