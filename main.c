#include <stdio.h>

//Calculez le montant total de la commande en fonction des choix des clients.
//Chaque plat choisi doit être multiplié par le nombre d'invités.
//Affichez l'addition qu'ils doivent régler


int main() {
    int guest;
    int couscous = 15;
    int tomato = 8;
    int risotto = 23;
    int soda = 5;
    int water = 2;
    int lemonade = 12;
    int tiramisu = 62;
    int icecream = 3;
    int macaroon = 8;


    printf("Combien d'invités il y aura-t-il ?");
    scanf("%d", &guest);
    if (guest > 0 && guest <= 2) {
        printf("Veuillez vous installer à la table numéro 1.");
    } else if (guest > 2 && guest <= 4) {
        printf("Veuillez vous installer à la table numéro 2.");
    } else if (guest > 4 && guest <= 8) {
        printf("Veuillez vous installer à la table numéro 3.");
    } else {
        printf("Malheureusement, notre restaurant ne peut pas vous recevoir.") ;
    }

    printf("Voici notre menu :\n "
           "Plats:\n"
           "'c' : coucous, 15$\n"
           "'t' : tomates, 8$\n"
           "'r' : risotto, 23$\n"
           "Boissons:\n"
           "'s': soda, 5$\n"
           "'e': eau, 2$\n"
           "'l' : limonade, 12$\n"
           "Desserts:\n"
           "'t': tiramisu, 62$\n"
           "'g': glace, 3$\n"
           "'m': macaron, 8$\n");
    printf ("Choisissez un plat, une boisson et un dessert.");
    scanf("%d", &couscous, &tomato, &risotto, &soda, &water, &lemonade, &tiramisu, &icecream, &macaroon);
    

    return 0;
}
