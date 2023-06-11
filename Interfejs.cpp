#include "Interfejs.h"


void Interfejs::wyswietlMenu() {
    std::cout << "Wybierz szyfr do zaszyfrowania:\n";
    std::cout << "1. Szyfr Cezara\n";
    std::cout << "2. Szyfr Podstawieniowy\n";
    std::cout << "3. Szyfr Gaderypoluki\n";
    std::cout << "4. Szyfr Viegenere\n";
}

int Interfejs::pobierzWybor() {
    int wybor;
    wybor=_getch()-48;
    return wybor;
}

void Interfejs::wyswietlKomunikat(const std::string& komunikat) {
    system("cls");
    std::cout << komunikat << std::endl;
}

std::string Interfejs::pobierzWiadomosc() {
    std::string wiadomosc;
    std::cin.ignore();  // Ignoruj pozostałe znaki w buforze (np. znak nowej linii po wczytaniu wyboru)
    std::getline(std::cin, wiadomosc);
    return wiadomosc;
}