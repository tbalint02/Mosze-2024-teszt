#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // Rosszul volt megadva a név

    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //for ciklus kiegészítése

    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl; //Hiányzo zárás és értékek kimutatása

    int atlag; // Inicializálás
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl; //átlag kiírása
    //mamoria felszabaditas

    return 0;
}
