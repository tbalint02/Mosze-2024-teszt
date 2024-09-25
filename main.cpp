
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; // Rosszul volt megadva a név
    std::cout << "1-100 ertekek duplazasa" << std::endl; 
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 1; i<=N_ELEMENTS+1; i++) //for ciklus kiegészítése
    {
        std::cout << i << "Ertek:" << b[i] << std::endl; //Hiányzo zárás és értékek kimutatása
    }    
    std::cout << "Atlag szamitasa: "<< std::endl; 
    int atlag=0; //Inicializálás
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;//átlag kiírása
    delete[] b; //mamoria felszabaditas


    return 0;
}
