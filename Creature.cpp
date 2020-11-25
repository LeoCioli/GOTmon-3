//
// Created by Corentin Lafargue on 23/11/2020.
//

#include "Creature.h"
#include "Attaque.h"

Creature::Creature() {
}

Creature::Creature(std:: string name, int vie) {
}

Creature:: ~Creature() {
}

void Creature::recevoirDegat(Attaque &attaque){
    SetVie(GetVie() - attaque.GetPuissance());
}

void Creature::SetVie(int vie) {
    m_vie = vie;
}

int Creature::GetVie() const {
    return m_vie;
}

void Creature::afficher() {
    std:: cout << "Votre créature est " << m_nom << " et, il lui reste  " << m_vie << " de vie." << std:: endl;
}
void Creature::setCreature(std::string nom, int vie) {
    nom = m_nom;
    vie = m_vie;
}


