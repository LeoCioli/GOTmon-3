#ifndef PROJETINFOING2_COLLECTION_H
#define PROJETINFOING2_COLLECTION_H
#include "registre.h"
#include "carte.h"
#include "creature.h"
#include "attaque.h"
#include "energie.h"
class Collection {
public:
    Collection();
    ~Collection();
    void afficherCollection();
    void setCreature(Creature creatureRecue);
    std::vector<Creature> getCreature();
    void setCarte(Carte *carteRecue);
    std::vector<Carte*> getCarte();
private:
    std::vector<Carte*> m_collectionCarte;
};
#endif