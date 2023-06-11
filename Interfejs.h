//
#ifndef INTERFEJS_H
#define INTERFEJS_H

#include <conio.h>
#include <iostream>
#include <string>

class Interfejs {
public:
    static void wyswietlMenu();
    static int pobierzWybor();
    static void wyswietlKomunikat(const std::string& komunikat);
    static std::string pobierzWiadomosc();
};

#endif
