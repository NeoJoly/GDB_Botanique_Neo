#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <string>
#include "Plante.h"

/*
    std::string _espece;
    int _hydratation;
    std::string _sante;
*/

    std::string Plante::getEspece(){
        return _espece;
    }

    int Plante::getHydratation(){
        return _hydratation;
    }

    std::string Plante::getSante(){
        return _sante;
    }


    Plante::Plante(std::string espece, int hydratation, std::string sante) : 
        _espece(espece), _hydratation(hydratation), _sante(sante)
    {}


    void Plante::afficher(){
        std::cout << _espece << " est un type de plante." << std::endl;
    }
    
    void Plante::SetHydratation(int valeurs){
        _hydratation += valeurs;
    }

#endif