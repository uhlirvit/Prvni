#include <iostream>         //knihovna pro výpis na obrazovku

using namespace std;        //jakoukoliv fci, co napisu za tento radek, bude hledat ve standartni knihovne => není nutno pak pøedepisovat pøed každou fci

int main()                  //integer je celociselna promenna, na konci je tedy nutno vratit cele cislo, kdyz vse probehne dobre, tak int vrati nulu
{\
    std::cout <<"Zdravim, jak se vede?" << std::endl;     //cokoliv za cout vypisime, vykresli obrazovku cokoliv, co tam napiseme
                                            //std deklaruje samotnou funkci, abychom ji mohli použít
    return 0;                               //endl = end of line
}
