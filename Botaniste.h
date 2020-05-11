#ifndef BOTANISTE_H
#define BOTANISTE_H

#include "Plante.h"
#include <string>

class Botaniste {

    private:
        std::string _nom;
        int _argent;
        int _nbplante;

    public:
        std::string getName();
        int getArgent();
        int getNbplante();
        void afficher();
        void arroser(Plante * cible);


        Botaniste(std::string nom, int nbplante, int argent);

};

#endif