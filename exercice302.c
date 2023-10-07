#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max 100

void affiche(int *arr, int taille);
double moyenne(int *arr, int taille);
double variance(int *arr, int taille);
double ecartype(int *arr, int taille);

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

    printf("Appuie sur:\n 0 pour afficher\n 1 pour la moyenne des nombres\n 2 pour la variance\n 3 pour l'écart-type\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 0:
        affiche(&T[0], taille);
        break;
    case 1:
        printf("La moyenne est:%f\n", moyenne(&T[0], taille));
        break;
    case 2:
        printf("La variance est:%f\n", variance(&T[0], taille));
        break;
    case 3:
        printf("La moyenne est:%f\n", ecartype(&T[0], taille));
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
//Ajout de la fonction  moyenne()
double moyenne(int *arr, int taille)
{
    double sum = 0;
    for (int i = 0; i < taille; i++)
    {
        sum = sum + arr[i];
    }
    return (sum / taille);
}
// Ajout de la fonction Variance()
double variance(int *arr, int taille)
{
    double var = 0, moy = 0, sum = 0;
    moy = moyenne(&arr[0], taille);
    for (int i = 0; i < taille; i++)
    {
        sum = sum + ((arr[i] - moy) * (arr[i] - moy));
    }
    var = sum / (taille);
    return var;
}
// Ajout de la fonction écart-type()
double ecartype(int *arr, int taille)
{
    double ecartType = variance(&arr[0], taille);
    return sqrt(ecartType);
}