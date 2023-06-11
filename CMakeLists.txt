cmake_minimum_required(VERSION 3.24)
project(szyfrowanie)

set(CMAKE_CXX_STANDARD 17)

add_executable(szyfrowanie main.cpp Szyfr.h SzyfrCezara.cpp SzyfrCezara.h SzyfrPodstawieniowy.cpp SzyfrPodstawieniowy.h Interfejs.cpp Interfejs.h ObslugaPliku.cpp ObslugaPliku.h Rdzen.cpp Rdzen.h SzyfrGaderypoluki.cpp SzyfrGaderypoluki.h SzyfrVigenere.cpp SzyfrVigenere.h)
