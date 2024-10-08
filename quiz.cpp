#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;


int main()
{
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 12);

    cout << "Podaj imie: ";
    cin >> imie;
    int pkt = 0;



    system("cls");
    cout << "3..";
    Sleep(1000);
    system("cls");

    system("cls");
    cout << "2..";
    Sleep(1000);
    system("cls");

    system("cls");
    cout << "1..";
    Sleep(1000);
    system("cls");

    cout << imie << " Witaj w tescie z Wiedzmina 3 \n";
    cout << "Pamietaj ze quiz zawiera spojlery do gry!";

    Sleep(5000);
    system("cls");

    cout << " Zycze powodzenia!"<<endl;


    Sleep(3000);
    system("cls");


    cout << "Na poczatku cos latwego. Kim byl Geralt?"<<endl;
    cout << "a) Czarodziejem"<<endl;
    cout << "b) Wiedzminem"<<endl;
    cout << "c) Szamanem"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b" || odp == "B")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Geralt byl wiedzminem!";

    }

    Sleep(3000);
    system("cls");





    cout << "Jak umarl Baron?"<<endl;
    cout << "a) Zostal zabity przez Dziki Gon"<<endl;
    cout << "b) Baron nie umarl"<<endl;
    cout << "c) Popelnil samobojstwo"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "c" || odp == "C")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Baron popelnil samobojstwo po stracie swojej zony!";

    }

    Sleep(3000);
    system("cls");







    cout << "Jak nazywa sie gra karciana ktora znajduje sie w wiedzminie?"<<endl;
    cout << "a) Poker"<<endl;
    cout << "b) Gwint"<<endl;
    cout << "c) Makao"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b" || odp == "B")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Gra karciana nazywa sie Gwint!";

    }

    Sleep(3000);
    system("cls");








    cout << "Ktory zwrot lub slowo nie kojarzy ci sie z Geraltem?"<<endl;
    cout << "a) Potepiony"<<endl;
    cout << "b) Zaraza"<<endl;
    cout << "c) Bywaj"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a" || odp == "A")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Geralt nie jest kojarzony z slowem Potepiony! Ciekawostka: mozna go rownierz kojarzyc z zwrotem (Pokaz mi swoje towary)";

    }

    Sleep(3000);
    system("cls");






    cout << "Jaki przydomek miala Ciri?"<<endl;
    cout << "a) Jaskolka"<<endl;
    cout << "b) Wilczyca"<<endl;
    cout << "c) sikorka"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a" || odp == "A")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Ciri nosila przyodmek: Jaskolka!";

    }

    Sleep(3000);
    system("cls");






    cout << "Kogo Geralt nazywal plotka?"<<endl;
    cout << "a) Keire Metz"<<endl;
    cout << "b) Swojego konia"<<endl;
    cout << "c) Yennefer"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b" || odp == "B")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Geralt nazywa swojego konia plotka!";

    }

    Sleep(3000);
    system("cls");




    cout << "Czego bala sie Keira Metz?"<<endl;
    cout << "a) konia Geralta"<<endl;
    cout << "b) Zoltana"<<endl;
    cout << "c) szczorow"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "c" || odp == "C")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Keira Metz bala sie szczorow (mozemy to zauwazyc podczas jednej z misji)!";

    }

    Sleep(3000);
    system("cls");






    cout << "Kim byl Zoltan?"<<endl;
    cout << "a) Byl czarodziejem ktory potrafil przechodzic przez portale"<<endl;
    cout << "b) Krasnoludem, ktory byl weteranem II wojny z Nilfgaardem"<<endl;
    cout << "c) Najlepszym wiedzminem w Kaer Morhen"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b" || odp == "B")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Zolatn byl krasnoludem, ktory byl weteranem II wojny z Nilfgaardem!";

    }

    Sleep(3000);
    system("cls");







    cout << "Dlaczego relacja Yennefer i Triss byly skomplikowane?"<<endl;
    cout << "a) Poniewaz Triss chciala ja kiedys zabic"<<endl;
    cout << "b) Geralt mial romans z Triss"<<endl;
    cout << "c) Yennefer rzucila na nia czar ktory oslabil jej moc"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b" || odp == "B")
    {
        system("cls");
        cout << "Poprawna odpowiedz!";
        pkt++;

    }

    else
    {
        system("cls");
        cout << "Zle! Geralt mial kiedys romans z Triss!";

    }

    Sleep(3000);
    system("cls");














    cout << "Gratulacje ukonczyles quiz!"<< endl;
    if(pkt < 2)
    {
        cout << "Jestes Slabiakiem ";
    }

    else if(pkt >= 3 && pkt <= 5)
    {
        cout << "Nie ma tragedii ";
    }

    else if(pkt >= 6 && pkt <= 8)
    {
        cout << "Bardzo dobrze znasz gre Wiedzmin 3  ";
    }

    else if(pkt = 9)
    {
        cout << "Wysmienicie znasz gre Wiedzmin 3 ";
    }



    cout << "Twoja liczba punktow wynosi: "<<pkt<<"/9."<< endl;

    return 0;
}
