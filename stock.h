#ifndef STOCK_H
#define STOCK_H

#include "logiciel_pro.h"
#include <vector>
using namespace std;

class stock
{
public:
    stock();
    ~stock();

    void ajouter();
    void modifier();
    void supprime();
    void rechercher();
    void afficher();
    void save();
    void charge();

private:
    vector<logiciel_pro*> stq;
};

#endif

