//
// Created by Léo Cioli on 25/11/2020.
//

#ifndef GOTMON_3_SPECIALE_H
#define GOTMON_3_SPECIALE_H

#include "Carte.h"
#include "Creature.h"
#include <iostream>

class Speciale : public Carte {

protected:
    std::string m_nom;
    std::string m_description;


public:
    Speciale();
    ~Speciale();
    Speciale(std::string nom);
    virtual void montrer() const;


};

#endif //GOTMON_3_SPECIALE_H
