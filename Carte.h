//
// Created by Corentin Lafargue on 24/11/2020.
//

#ifndef PROJET_CARTE_H
#define PROJET_CARTE_H

#include <iostream>
#include <string>

class Carte {

public:
    Carte();
    ~Carte();
    Carte(std::string nom, std::string description, std::string type);
    std::string getNom()const;
    std::string getDescription() const;
    std::string getType() const;
    void setNom(std::string nom);
    void setDescription(std::string description);
    void setType(std::string type);
    virtual void afficher();
    virtual void SetCreatature(std:: string nom, int vie);
    virtual int GetVie() const ;
    virtual void SetVie(int vie);
    virtual void setEnergie(int niveau, std:: string type);

protected:
    std::string m_nom;
    std::string m_description;
    std::string m_type;
};


#endif //PROJET_CARTE_H
