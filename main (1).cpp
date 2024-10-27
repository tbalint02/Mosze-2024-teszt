
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS + 1]; // Rosszul volt megadva a n�v
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 1; i <= N_ELEMENTS; i++) // for ciklus kieg�sz�t�se
    {
        std::cout << i << "Ertek:" << b[i] << std::endl; // Hi�nyzo z�r�s �s �rt�kek kimutat�sa
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Inicializ�l�s
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl; // �tlag ki�r�sa
    delete[] b;                                   // mamoria felszabaditas

    osszeg();

    return 0;
}

int osszeg()
{
    int ossz = 0;
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        ossz += i;
    }
    std::cout << "Az értékek összege: " << ossz << std::endl;
}
