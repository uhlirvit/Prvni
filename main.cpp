#include <iostream>

using namespace std;

int main()
{
    //bool vstup2;                                                             // deklarace promenne
    //vstup2 = false;                                                          // ulozeni hodnoty do promenne

    int vstup = 0;                                                             // inicializace promenne - doporucovany zpusob

    cout << "Stiskni 0 nebo 1: ";
    cin >> vstup;

    if (vstup == 0)
    {
        cout << "Nula!" << endl;
    }
    else if(vstup == 1)
    {
        cout << "Jedna!" << endl;
    }
    else
    {
        cout << "Mel si zmacknout 0 nebo 1! Tohle je: " << vstup << endl;
    }

    // Prepinac
    switch (vstup)
    {
        case 0: cout << "Nula - ze switche"; break;    // Vse, co je mezi 'case' a 'break;' se provede v pøípadì, že vstup = 0
        case 1: cout << "Jedna - ze switche"; break;   // Vse, co je mezi 'case' a 'break;' se provede v pøípadì, že vstup = 1
        default: cout << "Mel si zmacknout 0 nebo 1! Tohle je: " << vstup << " - ze switche.";
    }


    return 0;
}
