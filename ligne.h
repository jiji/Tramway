#ifndef LIGNE_H
#define LIGNE_H
class Rame;
#include <QList>
#include <iostream>
#include "element.h"
#include "rame.h"
#include <QPainter>
using namespace std;
class Ligne
{
    QList<Element *> ligne;
    QList<Rame *> rames;
    int longueur;

public:
    Ligne();
    Ligne(int longueur);
    void afficher(QPainter * painter, int, int);
    void ajouterRame(Rame * rame);
    QList<Rame *> * getRames();
    Rame * getRameAt(int);
    int getLongueur();
    int getNbRames();
    Element * getElementAt(int i);
    Element * ElementExists(int i);
};

#endif // LIGNE_H
