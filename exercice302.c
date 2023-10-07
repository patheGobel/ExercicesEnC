#include <stdio.h>
#include <stdlib.h>
#define max 100

int moyenne(int *arr, int taille);
void affiche(int *arr, int taille);

int main()
{
    int taille = 0, T[max], choix = 0;
    printf("Donner la taille de votre tableau\n");
    scanf("%d", &taille);
    printf("Donner une liste de valeur\n");
    for (int i = 0; i < taille; i++)
    {
        scanf("%d", &T[i]);
    }

    printf("Appuie sur:\n 0 pour afficher\n 1 pour la moyenne des nombres\n 2 pour la variance\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 0:
        affiche(&T[0], taille);
        break;
    case 1:
        printf("La moyenne est:%d", moyenne(&T[0], taille));
        break;
        // default:
        //   printf("La moyenne est:%d", variance(&T[0], taille));
        //  break;
    }

    return 0;
}

void affiche(int *arr, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}

int moyenne(int *arr, int taille)
{
    int sum = 0;
    for (int i = 0; i < taille; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

/*int variance(int *arr, int taille)
{
    int sum = 0;
    for (int i = 0; i < taille; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}*/