#include "collection.h"
#include "carte.h"
#include "attaque.h"
#include "creature.h"
#include "energie.h"

Collection::Collection() {}
Collection::~Collection() {}

void Collection::afficherCollection() {
    ////// Cartes Lannister //////
    Carte *jaime(0);
    jaime = new Creature(8);
    jaime->setCreature("Jaime Lannister", "Chevalier au service de la Couronne, regicide.", coupBas, lancerCouteau, 2);
    Carte *gardeRoyale(0);
    gardeRoyale = new Creature(6);
    gardeRoyale->setCreature("Garde Royale", "Garde rapprochee du roi ou de la reine.", entaille, coupBouclier, 2);
    ////// Cartes Stark //////
    Carte *arya(0);
    arya = new Creature(6);
    arya->setCreature("Arya Stark", "Tueuse du roi de la nuit, appartenant a la communaute des sans visages.", danseEau,
                      coupDague, 2);
    Carte *loup(0);
    loup = new Creature(8);
    loup->setCreature("Loup Geant", "Animal emblematique du Nord, feroce et fidele.", morsure, sautGorge, 2);
    ////// Cartes Tyrell //////
    Carte *loras(0);
    loras = new Creature(7);
    loras->setCreature("Loras Tyrell", "Chevalier aux fleurs, combattant experimente.", charge, frappePrecise, 2);
    Carte *archers(0);
    archers = new Creature(7);
    archers->setCreature("Archers Tyrell", "Tireurs les plus precis de Westeros.", tirCorps, pluieFleche, 2);
    ////// Cartes Targaryen //////
    Carte *jon(0);
    jon = new Creature(9);
    jon->setCreature("Jon Snow", "De son vrai nom Aegon Targaryen, heritier legitime du trone.", coupPoing, grandGriffe,
                     2);
    Carte *dragon(0);
    dragon = new Creature(5);
    dragon->setCreature("Dragon", "Creature ancestrale montee par les targaryens.", coupQueue, dracarys, 2);
    ////// Attaque Jaime Lannister //////
    Attaque coupBas("Coup bas", "Jaime Lannister inflige un grand coup d'épee dans le dos de son adversaire.", 3,
                    "Castral Roc", 1);
    Attaque lancerCouteau("Lancer de couteau", "Jaime Lannister lance un couteau sur son adversaire, degats critiques.",
                          6, "Castral Roc", 2);
    ////// Attaque Garde Royale //////
    Attaque entaille("Entaille", "Blesse l'adversaire d'une entaille assez profonde.", 2, "Castral Roc", 1);
    Attaque coupBouclier("Coup de bouclier", "Afflige un coup de bouclier puissant à l'adversaire.", 4, "Castral Roc",
                         1);
    ////// Attaque Arya Stark //////
    Attaque danseEau("Danse de l'eau", "Utilise la technique de la danse de l'eau pour blesser son adversaire.", 3,
                     "Winterfell", 1);
    Attaque coupDague("Coup de dague", "Frappe l'ennemi d'un coup précis avec sa dague en acier Valyrien.", 7,
                      "Winterfell", 2);
    ////// Attaque Loup Géant //////
    Attaque morsure("Morsure", "Mord l'adversaire avec sa machoire puissante.", 3, "Winterfell", 1);
    Attaque sautGorge("Saut a la gorge", "Saute et attrape l'adversaire à la gorge.", 5, "Winterfell", 2);
    ////// Attaque Loras Tyrell //////
    Attaque charge("Charge chevaleresque", "Charge son adversaire avec sa lance de chevalier.", 3, "Hautjardin", 1);
    Attaque frappePrecise("Frappe precise", "Fappre l'adversaire sur un de ses points faibles.", 6, "Hautjardin", 2);
    ////// Attaque Archers Tyrell //////
    Attaque tirCorps("Tir dans le corps", "Decoche une fleche en touchant sa cible a coup sur.", 3, "Hautjardin", 1);
    Attaque pluieFleche("Pluie de fleches",
                        "Les archers decoche en meme temps creant alors une pluie de fleche sur l'adversaire.", 5,
                        "Hautjardin", 2);
    ////// Attaque Jon Snow //////
    Attaque coupPoing("Coup de poing", "Jon Snow frappe puissamment son adversaire avec le poing.", 2, "Peyredragon",
                      1);
    Attaque grandGriffe("Grand Griffe", "Jon Snow porte un coup puissant avec son epee Grand Griffe en acier Valyrien.",
                        5, "Peyredragon", 2);
    ////// Attaque Dragon //////
    Attaque coupQueue("Coup de queue", "Le dragon frappe avec sa queue l'adversaire cible", 4, "Peyredragon", 1);
    Attaque dracarys("Dracarys", "La dragon crache un feu extremement puissant sur son ennemi", 8, "Peyredragon", 2);
    ////// Cartes Energies //////
    Carte *castralRoc(0);
    castralRoc = new Energie("Castral Roc");
    castralRoc->setEnergie("Castral Roc", "Forteresse de la famille Lannister", 4);
    Carte *winterfell(0);
    winterfell = new Energie("Winterfell");
    winterfell->setEnergie("Winterfell", "Forteresse de la famille Stark", 4);
    Carte *hautjardin(0);
    hautjardin = new Energie("Hautjardin");
    hautjardin->setEnergie("Hautjardin", "Forteresse de la famille Tyrell", 4);
    Carte *peyredragon(0);
    peyredragon = new Energie("Peyredragon");
    peyredragon->setEnergie("Peyredragon", "Forteresse de la famille Targaryen", 4);
    ////// Cartes Lannister Set //////
    setCarte(jaime);
    setCarte(gardeRoyale);
    setCarte(castralRoc);
    ////// Cartes Stark Set //////
    setCarte(arya);
    setCarte(loup);
    setCarte(winterfell);
    ////// Cartes Tyrell Set //////
    setCarte(loras);
    setCarte(archers);
    setCarte(hautjardin);
    ////// Cartes Targaryen Set //////
    setCarte(jon);
    setCarte(dragon);
    setCarte(peyredragon);
}
void Collection::setCarte(Carte *carteRecue) {
    m_collectionCarte.push_back(carteRecue);
}
std::vector<Carte *> Collection::getCarte() {
    return m_collectionCarte;
}