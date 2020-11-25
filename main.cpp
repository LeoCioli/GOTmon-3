#include "Energie.h"
#include "Carte.h"
Energie::Energie() {
}
Energie::~Energie() {
}
Energie::Energie(std::string nom, std::string type) : m_nom(nom), m_type(type){}





18 h 22
#include <iostream>
#include "Carte.h"
class Energie : public Carte{
protected:
    std::string m_nom;
    std::string m_type;
public:
    Energie();
    ~Energie();
    Energie(std::string m_nom, std::string m_type);
};
18 h 23
#include "Carte.h"
#include <iostream>
Carte::Carte() {
}
Carte::~Carte() {
}
Carte::Carte(std::string nom, std::string description, std::string type) : m_nom(nom), m_description(description), m_type(type) {}
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
18 h 23
class Carte {
protected:
    std::string m_nom;
    std::string m_description;
    std::string m_type;
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
};
Nouveau

        Léo  13 h 10
#include <iostream>
#include <cstdlib>
#include <unistd.h>
int main() {
    int choix(0);
    std::string reponse("y");
    std::cout << "Bienvenue a Westeros, le royaume des humains" << std::endl;
    usleep(2000);
    std::cout << "Vous allez devoir conquerir les Sept Couronnes" << std::endl;
    usleep(2000);
    std::cout << "Alors je vous pose la question messire, etes-vous pret?" << std::endl << std::endl;
    usleep(2000);
    getline(std::cin, reponse);
    if(reponse == "oui" || reponse =="Oui")
    {
        std::cout << "Parfait, commencons" << std::endl << std::endl;
    }
    else
    {
        std::cout << "Alors revenez plus tard" << std::endl;
        return 0;
    }
    while(choix != 4)
    {
        std::cout << "1. Debuter une partie" << std::endl;
        std::cout << "2. Voir sa collection" << std::endl;
        std::cout << "3. Regles du jeu" << std::endl;
        std::cout << "4. Quitter le jeu" << std::endl;
        std::cout << "Veuillez faire un choix" << std::endl << std::endl;
        std::cin >> choix;
        switch(choix)
        {
            case 1:
                system("cls");
                std::cout << "Vous avez choisi l'option 1" << std::endl;
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                std::cout << "Vous avez choisi l'option 2" << std::endl;
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                std::cout << "Bienvenue dans les regles du jeu" << std::endl;
                usleep(2000);
                std::cout << "Le principe est simple, au debut de chaque partie, on initialise les deux joueurs ainsi que leurs decks grace \na la collection de cartes" << std::endl;
                usleep(1000);
                std::cout << "Les decks sont crees aleatoirement." << std::endl;
                usleep(1000);
                std::cout << "..........." << std::endl;
                break;
            default:
                if(choix < 1 || choix > 4)
                {
                    system("cls");
                    std::cout << "Le nombre saisi n'est pas valide" << std::endl;
                    system("pause");
                    system("cls");
                }
                break;
        }
    }
}