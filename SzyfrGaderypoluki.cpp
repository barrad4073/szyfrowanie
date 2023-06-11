#include "SzyfrGaderypoluki.h"

SzyfrGaderypoluki::SzyfrGaderypoluki() {}

std::string SzyfrGaderypoluki::zaszyfruj(const std::string& tekst) {
    std::string zaszyfrowanyTekst;
    std::string szyfr= "gaderypoluki";
    std::string litera;
    for (int i = 0; i < tekst.length(); i++)
    {
        for (int j = 0; j < szyfr.length(); j++)
        {
            if (tolower(tekst[i]) == tolower(szyfr[j]))
            {
                if (j%2 == 0)
                {
                    litera = tolower(szyfr[j+1]);
                    break;
                }
                else
                {
                    litera = tolower(szyfr[j-1]);
                    break;
                }
            }
            else {
                litera = tolower(tekst[i]);
            }
        }
        zaszyfrowanyTekst += litera;
    }
    return zaszyfrowanyTekst;

}