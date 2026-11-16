#include <stdio.h>

int main()
{
     float HT, TVA, TTC;

     printf("Saisir HT: ");
     scanf("%f", &HT);

     printf("Saisir TVA : ");
     scanf("%f", &TVA);

     TTC = HT * (1 + TVA / 100.0f);

     printf("Le TTC est : %.2f\n", TTC);
     return 0;
 }
