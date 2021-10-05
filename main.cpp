#include <iostream>         //knihovna pro výpis na obrazovku

using namespace std;        //jakoukoliv fci, co napisu za tento radek, bude hledat ve standartni knihovne => není nutno pak pøedepisovat pøed každou fci

int main()                  //integer je celociselna promenna, na konci je tedy nutno vratit cele cislo, kdyz vse probehne dobre, tak int vrati nulu
{\
    std::cout <<"Zdravim, jak se vede?" << std::endl;     //cokoliv za cout vypisime, vykresli obrazovku cokoliv, co tam napiseme
                                                          //std deklaruje samotnou funkci, abychom ji mohli použít

    int celeCislo = 14000000;
    int a = 3;

    double realneCislo = double(a) / celeCislo;           //=realne cislo, pouziva se nejvic pro numericke vypocty, je 2x vice presnejsi nez "float"

    char poleZnaku[] = {'a', 'b', 'c'};                                      // datova promenna pro znak
    string retezec = "Toto je retezec.";                  // promenna pro slovni spojeni

    int mojePole[]={1, 5, 8};                             //pole, nebo-li vektor, dale je ekvivalent zapsani slozek vektoru, takto neni nutno deklarovat počet složek
        //mojePole[0]=1;
        //mojePole[1]=5;
        //mojePole[2]=8;

    bool start = 0;                                       //Booleovska promenna
    start = true;                                         // = 1
    start = false;                                        // = 0
    cout << "Velke cislo = " << celeCislo << endl;              //textovy øetìzec je vždy nutno oddìlovat <<
                                                          // davat si pozor na to jaky datovy tip mame, je potreba treba mit tecku a desetinne cislo apod.
    //cout << "Znak = " << znak << endl;
    cout << "Retezec = " << retezec << endl;
    cout << "Druha slozka pole je " << mojePole[1] << endl; //vypise 2. prvek pole, C cisluje od 0 !!!
    cout << "Davej bacha, cislovani jde od 0!"<< endl;
    cout << "Treti slozka z pole znaku " << poleZnaku[2] << endl;

    return 0;                                             //endl = end of line
}
