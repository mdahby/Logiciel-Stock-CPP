#include "stock.h"
#include <iostream>
#include <fstream>

using namespace std;

stock::stock() {}

stock::~stock()
{
    for (int i = 0; i < stq.size(); i++)
        delete stq[i];
    stq.clear();
}

// ===== ajouter =====
void stock::ajouter()
{
    string idu, version, css;
    int j, m, a;

    cout << "IDU: ";
    cin >> idu;
    cout << "Version: ";
    cin >> version;
    cout << "Date (J M A): ";
    cin >> j >> m >> a;
    cout << "CSS: ";
    cin >> css;

    for (int i = 0; i < stq.size(); i++)
        if (stq[i]->getIDU() == idu)
        {
            cout << "Logiciel deja existant\n";
            return;
        }

    date d(j, m, a);
    stq.push_back(new logiciel_pro(idu, version, d, css));
    cout << "Ajout OK\n";
}

// ===== modifier =====
void stock::modifier()
{
    string idu;
    cout << "IDU: ";
    cin >> idu;

    for (int i = 0; i < stq.size(); i++)
        if (stq[i]->getIDU() == idu)
        {
            string version;
            int j, m, a;

            cout << "Nouvelle version: ";
            cin >> version;
            cout << "Nouvelle date (J M A): ";
            cin >> j >> m >> a;

            stq[i]->setversion(version);
            stq[i]->setDP(date(j, m, a));

            cout << "Modification OK\n";
            return;
        }

    cout << "Logiciel non trouve\n";
}

// ===== supprimer =====
void stock::supprime()
{
    string idu;
    cout << "IDU: ";
    cin >> idu;

    for (int i = 0; i < stq.size(); i++)
    {
        if (stq[i]->getIDU() == idu)
        {
            delete stq[i];   // ????? ??object

            stq[i] = stq[stq.size() - 1]; // ???? ???? ????
            stq.pop_back();               // ??? ?????

            cout << "Suppression OK\n";
            return;
        }
    }

    cout << "Logiciel non trouve\n";
}


// ===== rechercher =====
void stock::rechercher()
{
    string idu;
    cout << "IDU: ";
    cin >> idu;

    for (int i = 0; i < stq.size(); i++)
        if (stq[i]->getIDU() == idu)
        {
            date d = stq[i]->getDP();
            cout << "IDU: " << stq[i]->getIDU() << endl;
            cout << "CSS: " << stq[i]->getCSS() << endl;
            cout << "Version: " << stq[i]->getversion() << endl;
            cout << "Date: " << d.getj() << "/" << d.getm() << "/" << d.geta() << endl;
            return;
        }

    cout << "Logiciel non trouve\n";
}

// ===== afficher =====
void stock::afficher()
{
    cout << "===== STOCK =====\n";
    if (stq.empty())
    {
        cout << "(vide)\n";
        return;
    }

    for (int i = 0; i < stq.size(); i++)
        cout << stq[i]->getIDU() << " | "
             << stq[i]->getCSS() << " | "
             << stq[i]->getversion() << endl;
}

// ===== save =====
void stock::save()
{
    ofstream f("stock.txt");

    for (int i = 0; i < stq.size(); i++)
    {
        date d = stq[i]->getDP();
        f << stq[i]->getIDU() << " "
          << stq[i]->getversion() << " "
          << d.getj() << " " << d.getm() << " " << d.geta() << " "
          << stq[i]->getCSS() << endl;
    }

    f.close();
    cout << "Sauvegarde OK\n";
}

// ===== charge =====
void stock::charge()
{
    ifstream f("stock.txt");
    if (!f) return;

    for (int i = 0; i < stq.size(); i++)
        delete stq[i];
    stq.clear();

    string idu, version, css;
    int j, m, a;

    while (f >> idu >> version >> j >> m >> a >> css)
        stq.push_back(new logiciel_pro(idu, version, date(j, m, a), css));

    f.close();
    cout << "Chargement OK\n";
}

