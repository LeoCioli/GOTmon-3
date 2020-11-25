//
// Created by Corentin Lafargue on 23/11/2020.
//

#include "Creature.h"
#include "Attaque.h"

Creature::Creature() {
}

Creature::Creature( std:: string nom, std:: string description, int vie, std :: string attaque1, std:: string attaque2) :
 m_nom(nom), m_description(description), m_vie(vie), m_attaque1(attaque1), m_attaque2(attaque2)
{
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

void Creature::SetNom(std:: string nom) const {
    m_nom == nom;
}



void Creature::afficher() {
    std:: cout << "Votre créature est " << m_nom << " et, il lui reste  " << m_vie << " de vie." << std:: endl;
}
void Creature::setCreature( std:: string nom, std:: string description, int vie, std :: string attaque1, std:: string attaque2) {
    m_vie = vie;
    m_nom = nom;
    m_description = description;
    m_attaque1 = attaque1;
    m_attaque2 = attaque2;

}


