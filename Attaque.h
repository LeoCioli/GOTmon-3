#ifndef PROJETINFOING2_ATTAQUE_H
#define PROJETINFOING2_ATTAQUE_H
#include <iostream>
#include <string>
class Attaque {
public:
    Attaque();
    Attaque(std::string nom, std::string description, int puissance, std::string energieUtil, int nbEnergie);
    ~Attaque();
    std::string GetNom() const;
    std::string GetDescription() const;
    int GetPuissance() const;
    std::string GetEnergieUtil() const;
    int GetNbEnergie() const;
    void setAttaque(std::string nom, std::string description, int puissance, std::string energieUtil, int nbEnergie);
private:
    std::string m_nom;
    std::string m_description;
    int m_puissance;
    std::string m_energieUtil;
    int m_nbEnergie;
};
#endif //PROJETINFOING2_ATTAQUE_H
