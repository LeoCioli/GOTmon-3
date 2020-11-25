
#ifndef PROJET_ENERGIE_H
#define PROJET_ENERGIE_H

#include <iostream>
#include <string>
#include "Carte.h"

class Energie : public Carte{

public:
    Energie();
    ~Energie();
    Energie(int niveau, std::string type);
    void SetEnergie(int niveau, std:: string type);
    int setNiveau(int niveau);
    int GetNiveau() const;
    void setType(std:: string type);
    void GetType() const;


protected:
    std::string m_niveau;
    std::string m_type;
};

#endif