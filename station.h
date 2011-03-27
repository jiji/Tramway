#ifndef STATION_H
#define STATION_H
#include "pointsynchronisation.h"
#include <iostream>
#include <QPainter>
#include <QString>
using namespace std;


class Station : public PointSynchronisation{
public:
    /*
     * Type de la station
     */
    enum Type
    {
        Terminus,
        Intermediaire
    };

    Station();
    Station(QString,Station::Type);

    void afficher(QPainter * painter, int x, int y, int, int);
    virtual QString getClasse(){ return QString("Station");}
    void run();

    /*
     * Gestion des signaux recus:
     * Signals::Demande
     * Signals::EstPasse : indique que la rame est partie, remet le feu a rouge.
     */
    void createSignal();

private:
    Type typeStation;

    QString nom;
};


#endif // STATION_H
