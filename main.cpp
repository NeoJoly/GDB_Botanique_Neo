#include <windows.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include "Botaniste.cpp"
#include "Plante.cpp"

using namespace std;

int main()
{
    Botaniste (*Joueur) = new Botaniste("Botaniste", 0, 100);

    Plante (*RosaRugosa) = new Plante("Rosa rugosa", 0, "Mauvaise sante");

    (*Joueur).afficher();
    (*RosaRugosa).afficher();

    (*Joueur).arroser(RosaRugosa);

    return 0;
}
