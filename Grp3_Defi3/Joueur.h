#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur
{
    private :
        bool trait;
        int minutes;
        int secondes;
    public :
        Joueur();
        void DonnerLeTrait();
        void RetirerLeTrait();
        bool Trait();
};


#endif