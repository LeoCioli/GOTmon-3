//
// Created by Léo Cioli on 25/11/2020.
//

#include "Speciale.h"
#include <iostream>

Speciale::~Speciale() {}

Speciale::Speciale() : m_nom("speciale"){}

Speciale::Speciale(std::string nom) : m_nom(nom) {}

void Speciale::montrer() const {
    std::cout << "Carte Spéciale:" << m_nom << "Cette carte permet de" << m_description << std::endl;
}


/*
 * permet de repiocher une carte : carte Chance
 * inflige 2 points de dégâts à tout le monde :  carte Double-Peine
 * redonne 1 point de vie à celui qui la pioche : carte Heal
 * donne 1 point d'attaque en plus : carte BoostAttaque
 * donne 1 poit d'énergie en plus : carte BoostEnergie
 * met l'attaque de l'adversaire à 0 : carte ContreAttaque
 */

