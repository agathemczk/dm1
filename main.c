#include <stdio.h>

int main() {
    int guest;
    char meal;
    char drink;
    char dessert;
    float addition;
    float plat ;
    float boisson;
    float desserts;


    printf("Combien d'invités il y aura-t-il ?");
    scanf(" %d", &guest);
    if (guest > 0 && guest <= 2) {
        printf("Veuillez vous installer à la table numéro 1.\n");
    } else if (guest > 2 && guest <= 4) {
        printf("Veuillez vous installer à la table numéro 2.\n");
    } else if (guest > 4 && guest <= 8) {
        printf("Veuillez vous installer à la table numéro 3.\n");
    } else {
        printf("Malheureusement, notre restaurant ne peut pas vous recevoir.\n") ;
        return 0 ;
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

    printf("Choisissez un plat, puis une boisson, et enfin un dessert.\n");
    scanf(" %c", &meal);
    scanf(" %c", &drink);
    scanf(" %c", &dessert);

    if ( meal == 'c' ) {
        plat = 15 ;
    } else if ( meal == 't') {
        plat = 8 ;
    } else {
        plat = 23 ;
    }


    if ( drink == 's' ) {
        boisson = 5 ;
    } else if ( drink == 'e' ) {
        boisson = 2 ;
    } else {
        boisson = 12 ;
    }


    if ( dessert == 't' ) {
        desserts = 62 ;
    } else if ( dessert == 'g' ) {
        desserts = 3 ;
    } else {
        desserts = 8  ;
    }

    addition = (plat + boisson + desserts) * guest ;
    printf("L'addition à régler sera de %.2f $.\n",addition) ;

    return 0;
}
