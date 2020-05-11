#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante {

    private:
        std::string _espece;
        std::string _sante;
        int _hydratation;

    public:
        std::string getEspece();
        std::string getSante();
        int getHydratation();
        void afficher();
        void SetHydratation(int valeurs);


        Plante(std::string espece, int hydratation, std::string sante);

};

#endif