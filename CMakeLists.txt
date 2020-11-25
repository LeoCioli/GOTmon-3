cmake_minimum_required(VERSION 3.10)
project(GOTmon-3)

set(CMAKE_CXX_STANDARD 14)

add_executable(GOTmon-3 main.cpp Energie.cpp Energie.h Creature.cpp Creature.h Speciale.cpp Speciale.h MainDuJoueur.cpp MainDuJoueur.h Joueur.cpp Joueur.h Collection.cpp Collection.h Deck.cpp Deck.h Fonctions.cpp Fonctions.h Carte.cpp Carte.h Attaque.cpp Attaque.h)