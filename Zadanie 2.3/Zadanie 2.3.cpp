// Zadanie 2.3.cpp 
//

#include <iostream>

int main()
{

        int numermiesiaca;
        std::cout << "Podaj liczbe z przedzialu od 1 do 12, by poznac przypisany do niej miesiac:\n"; //pobiera dane
        std::cin >> numermiesiaca;
            
        switch (numermiesiaca) //przełącza między liczbami 1-12, gdy nie pada taka, wyrzuca komunikat o błędzie
        {
        case 1:
            std::cout << "Styczen.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest pochmurno.\n";
            break;

        case 2:
            std::cout << "Luty.\nMa 28 dni w roku nieprzestepnym.\nW tym miesiacu jest pochmurno.\n";
                break;

        case 3:
            std::cout << "Marzec.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest pochmurno.\n";
            break;

        case 4:
            std::cout << "Kwiecien.\nMa 30 dni w roku nieprzestepnym.\nW tym miesiacu jest slonecznie.\n";
            break;

        case 5:
            std::cout << "Maj.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest slonecznie.\n";
            break;

        case 6:
            std::cout << "Czerwiec.\nMa 30 dni w roku nieprzestepnym.\nW tym miesiacu jest slonecznie.\n";
            break;

        case 7:
            std::cout << "Lipiec.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest slonecznie.\n";
            break;

        case 8:

            std::cout << "Sierpien.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest slonecznie.\n";
            break;

        case 9:
            std::cout << "Wrzesien.\nMa 30 dni w roku nieprzestepnym.\nW tym miesiacu jest slonecznie.\n";
            break;

        case 10:
            std::cout << "Pazdziernik.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest pochmurno.\n";
            break;

        case 11:
            std::cout << "Listopad.\nMa 30 dni w roku nieprzestepnym.\nW tym miesiacu jest pochmurno.\n";
            break;

        case 12:
            std::cout << "Grudzien.\nMa 31 dni w roku nieprzestepnym.\nW tym miesiacu jest pochmurno.\n";
            break;

        default:

            std::cout << "Podales liczbe spoza zakresu 1-12.\n";
        }

           


    return 0;
}

