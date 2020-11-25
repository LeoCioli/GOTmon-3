//
// Created by Corentin Lafargue on 24/11/2020.
//

#include "Carte.h"
#include <iostream>
Carte::Carte() {
}
Carte::~Carte() {
}
Carte::Carte(std::string nom, std::string description, std::string sorte) : m_nom(nom), m_description(description)
{
}

std::string Carte:: getNom()const{
    return m_nom;
}

std::string Carte::getDescription() const{
    return m_description;
}

std::string Carte::getType() const{
    return m_type;
}
void Carte::setNom(std::string nom){
    m_nom = nom;
}

void Carte::setDescription(std::string description){
    m_description = description;
}

void Carte::setType(std::string type){
    m_type = type;
}

void Carte::afficher() {
    std::cout << getNom() << std::endl;
    std::cout << getDescription() << std::endl;
}

void Carte ::SetCreatature(std:: string nom, int vie) {
}

void Carte::SetVie(int vie) {
}

int Carte::GetVie() const{
    return 0;
}

void Carte::setEnergie(int niveau, std::string type){

}