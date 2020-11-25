
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