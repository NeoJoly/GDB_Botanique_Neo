#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include "Botaniste.h"

/*
    std::string _nom;
    int _nbplante;
    int _argent;
*/

    std::string Botaniste::getName(){
        return _nom;
    }

    int Botaniste::getNbplante(){
        return _nbplante;
    }

    int Botaniste::getArgent(){
        return _argent;
    }


    Botaniste::Botaniste(std::string nom, int nbplante, int argent) : 
        _nom(nom), _nbplante(nbplante), _argent(argent)
    {}


    void Botaniste::afficher(){
        std::cout << _nom << " est un botaniste." << std::endl;
    }

    void Botaniste::arroser( Plante * cible ){
        std::cout << _nom << " arrose " << (*cible).getEspece() << std::endl;
        (*cible)._hydratation(1);
    }

    void Botaniste::SetHydratation(int valeurs){
        _hydratation += valeurs;
    }



#endif