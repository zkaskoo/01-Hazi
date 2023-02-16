#include <stdio.h>

int main()
{
    int szam;
    
    printf("Irja be hanyszor meddig akarja kiiratni a szamot");
    scanf("%d", &szam);
    
    for (int i = 1; i < szam + 1; ++i)
    {
        printf("%d Zoli\n", i);
    }
    
    return 0;
}
