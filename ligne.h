#ifndef LIGNE_H
#define LIGNE_H
#include <list>
#include "troncon.h"
using namespace std;
class Ligne
{
    list<Troncon> ligne;
public:
    Ligne();
    void ajouterTroncon(Troncon t);
};

#endif // LIGNE_H
