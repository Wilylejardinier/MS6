#include "Joueur.h"

Joueur::Joueur()
{
    trait = false;
    minutes = 0;
    secondes = 0;
}

void Joueur::DonnerLeTrait()
{
    trait = true;
}

void Joueur::RetirerLeTrait()
{
    trait = false;
}

bool Joueur::Trait()
{
    return trait;
}