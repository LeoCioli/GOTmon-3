#include "attaque.h"

Attaque::Attaque() {
}
Attaque::Attaque(std::string nom, std::string description, int puissance, std::string energieUtil, int nbEnergie) : m_nom(nom), m_description(description), m_puissance(puissance), m_energieUtil(energieUtil), m_nbEnergie(nbEnergie){
}
Attaque:: ~Attaque() {
}
std :: string Attaque::GetNom() const {
    return m_nom;
}
std::string Attaque::GetDescription() const {
    return m_description;
}
int Attaque::GetPuissance() const {
    return m_puissance;
}
std::string Attaque::GetEnergieUtil() const {
    return m_energieUtil;
}
int Attaque::GetNbEnergie() const{
    return m_nbEnergie;
}