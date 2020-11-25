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
    Creature( std:: string nom, std:: string description, int vie, std :: string attaque1, std:: string attaque2);
    ~Creature();
    void recevoirDegat(Attaque &attaque);
    void afficher ();
    void SetVie(int vie);
    int GetVie() const;
    std:: string GetNom(std:: string nom);
    void SetNom() const;
    void setCreature( std:: string nom, std:: string description, int vie, std :: string attaque1, std:: string attaque2);



protected:

    std:: string m_nom;
    std:: string m_description;
    int m_vie;
    std:: string m_attaque1;
    std:: string m_attaque2;

};


#endif //PROJET_CREATURE_H
