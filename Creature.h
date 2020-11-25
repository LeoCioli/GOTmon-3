//
// Created by Corentin Lafargue on 23/11/2020.
//

#ifndef PROJET_CREATURE_H
#define PROJET_CREATURE_H

#include <iostream>
#include <string>

#include "Attaque.h"
#include "Carte.h"


class Creature {

public:

    Creature();
    Creature(std :: string nom, int vie);
    ~Creature();
    void recevoirDegat(Attaque &attaque);
    void afficher ();
    void SetVie(int vie);
    int GetVie() const;
    void setCreature(std:: string nom, int vie);



protected:

    std:: string m_nom;
    int m_vie;

};


#endif //PROJET_CREATURE_H
