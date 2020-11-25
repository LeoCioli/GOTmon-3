//
// Created by Léo Cioli on 25/11/2020.
//

//
// Created by Corentin Lafargue on 24/11/2020.
//

#include "Energie.h"
#include "Carte.h"
#include <iostream>

Energie::Energie() {
}
Energie::~Energie() {
}
Energie::Energie(int niveau, std::string type) {
}

void Energie :: setType(std::string type) {
    m_type = type;
}

int Energie::setNiveau(int niveau) {
    m_niveau = niveau;
}

int Energie::GetNiveau() const {
    return m_niveau;
}


void Energie::SetEnergie(int niveau, std::string type) {
    m_niveau = niveau;
    m_type = type;
}

