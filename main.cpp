#include <iostream>

int main() {

    char devinette='8';  //attention char pour le bon fonctionnement de isdigit
    char saisie=' ';
    debut:  //marqueur de debut pour le GOTO
    printf("Veuillez saisir un nombre entre 1 et 9\n");
    scanf(" %c",&saisie); //mettre un espace avant le % car appels successifs
    if(!isdigit(saisie)) //si le saisie contient un caractere
    {
        printf("Le nombre n'est pas numérique\n");

        goto debut;
    }
    else
    {
        if(devinette==saisie) //si le saisie est égale à la devinette
        {
            printf("Vous avez gagné");
        }
        else
        {
            printf("Vous n'avez pas trouvé le nombre\n");
            goto debut;
        }
    }
    return 0;
}
