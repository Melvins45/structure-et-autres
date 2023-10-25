#include <stdio.h>
#include <stdlib.h>
#include"main.h"


void initialiserCoordonnees(Coordonnees* point)
{
    (*point).x = 0;
    (*point).y = 0;
    point->x=0;
    printf("%ld", point->x);
}
int main()
{
    printf("Hello world!\n");
    Coordonnees point={0};
    point.x=10;
    point.y=20;

    initialiserCoordonnees(&point);

    Personne joueur[2];
    long i=0;
    do
    {
      long a=i+1;
      printf("Quel est le nom du joueur %ld ?\n",a);
      scanf("%s",joueur[i].nom);
      printf("Quel est le prénom du joueur %ld ?\n",a);
      scanf("%s",joueur[i].prenom);
      i++;
    }while(i<2);

    printf("le joueur 1 s'appelle %s %s \n", joueur[0].prenom, joueur[0].nom);
    printf("le joueur 2 s'appelle %s %s \n",joueur[1].prenom,joueur[1].nom);




    return 0;
}
