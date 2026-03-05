#include <iostream>
#include "stock.h"
using namespace std;

int main()
{
    stock s;
    int choix;

    do
    {
        cout << "\n1.Ajouter\n2.Modifier\n3.Supprimer\n4.Rechercher\n5.Afficher\n6.Save\n7.Load\n0.Quitter\nChoix: ";
        cin >> choix;

        switch(choix)
        {
        case 1: s.ajouter(); break;
        case 2: s.modifier(); break;
        case 3: s.supprime(); break;
        case 4: s.rechercher(); break;
        case 5: s.afficher(); break;
        case 6: s.save(); break;
        case 7: s.charge(); break;
        case 0: cout << "Bye\n"; break;
        default: cout << "Choix invalide\n";
        }
    } while (choix != 0);

    return 0;
}

