#include <iostream>         //knihovna pro v�pis na obrazovku

using namespace std;        //jakoukoliv fci, co napisu za tento radek, bude hledat ve standartni knihovne => nen� nutno pak p�edepisovat p�ed ka�dou fci

int main()                  //integer je celociselna promenna, na konci je tedy nutno vratit cele cislo, kdyz vse probehne dobre, tak int vrati nulu
{\
    std::cout <<"Zdravim, jak se vede?" << std::endl;     //cokoliv za cout vypisime, vykresli obrazovku cokoliv, co tam napiseme
                                            //std deklaruje samotnou funkci, abychom ji mohli pou��t
    return 0;                               //endl = end of line
}
