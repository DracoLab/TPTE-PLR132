// Onomatepwnymo1 ctxxxxx
// Onomatepwnymo2 ctxxxxx

#include <stdio.h>

#define NAME "Onomatepwnymo"
#define CT "ctxxxxx"

int main()
{
    int apo, ews, etos, hmera;
    printf("Arxi etos: ");
    scanf("%d", &apo);
    printf("Telos etos: ");
    scanf("%d", &ews);
    for (etos = apo; etos <= ews; etos++)
    {
        int a = etos % 19;
        int b = etos % 4;
        int g = etos % 7;
        int d = (19 * a + 16) % 30;
        int e = (2 * b + 4 * g + 6 * d) % 7;
        hmera = d + e + 3;
        if (hmera <= 30)
            printf("Pasxa %d -> %d Apriliou\n", etos, hmera);
        else
            printf("Pasxa %d -> %d Maiou\n", etos, (hmera - 30));
    }
    printf(NAME "\n");
    printf(CT "\n");
    return 0;
}
