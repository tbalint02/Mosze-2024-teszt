#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // Rosszul volt megadva a n�v

    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //for ciklus kieg�sz�t�se

    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl; //Hi�nyzo z�r�s �s �rt�kek kimutat�sa

    int atlag; // Inicializ�l�s
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl; //�tlag ki�r�sa
    //mamoria felszabaditas

    return 0;
}
