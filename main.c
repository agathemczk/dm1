#include <stdio.h>

int main() {
    int guest;


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



    return 0;
}
