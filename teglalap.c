#include <stdio.h>

int main()
{
    int magassag;
    int szelesseg;
    
    printf("Adja meg a teglalap magassagat(cm): ");
    scanf("%d", &szelesseg);
    
    printf("Adja meg a teglalap szelesseget(cm): ");
    scanf("%d", &magassag);

    printf("Az adott teglalapnak, melynek %dcm a magassage es %dcm a szelessege: %d^2 cm\n", magassag, szelesseg, magassag * szelesseg);
    printf("A kerulete pedig a %dcm magas es %dcm szeles teglalapnak: %dcm\n", magassag, szelesseg, 2 * (magassag + szelesseg));

    return 0;
}
