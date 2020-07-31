#include <stdio.h>
#include <stdlib.h>

float umrechnungInEuro (float a, float b);
float umrechnungVonEuro(float c, float d);


int main()
{
    int auswahlEins =1;
    int auswahlZwei = 1;
    float erg =0;
    float ergEnde=0;
    float dollar = 1.17;
    float dinar= 3.23;
    float pound= 0.9;
    float e =0.0;

        while (auswahlEins!=0)
    {


        printf("Willkommen zu unserer W\x84hrungs-Software 2.0 \n ");

        printf("W\x84hle die Eingabew\x84hrung! \n");
        printf("Dollar......................1\n");
        printf("Dinar....... ...............2\n");
        printf("Pound.......................3\n");
        printf("Euro........................4\n");

        scanf("%d", &auswahlEins);

        printf("W\x84hle die Ausgabew\x84hrung! \n");
        printf("Dollar......................1\n");
        printf("Dinar....... ...............2\n");
        printf("Pound.......................3\n");
        printf("Euro........................4\n");

        scanf("%d", &auswahlZwei);


        printf("Bitte gib den Wert den du Umrechnen m\224chtest ein \n");
        scanf("%f", &e);

        switch(auswahlEins)
        {
            case 1:
                    erg = umrechnungInEuro(e, dollar );
                    break;
            case 2:
                    erg = umrechnungInEuro(e, dinar);
                    break;
            case 3:
                    erg = umrechnungInEuro(e,pound);
                    break;
            case 4:
                    erg = umrechnungInEuro(e,1);
                    break;

            case 0: printf("Beenden \n");
                    break;

            default:printf("Herst gib a Zahl von 0 bis 3 ein! \n \n");
            break;
        }

        switch(auswahlZwei)
        {
            case 1:
                    printf("Lass uns in Dollar umrechnen! \n");
                    ergEnde = umrechnungVonEuro(erg,dollar);
                    printf("Das Ergebnis ist: %.2f Dollar \n \n", ergEnde);
                    break;
            case 2:
                    printf("Lass uns in Dinar umrechnen! \n");
                    ergEnde = umrechnungVonEuro(erg, dinar);
                    printf("Das Ergebnis ist: %.2f Dinar \n \n", ergEnde);
                    break;
            case 3:
                    printf("Lass uns in Pound umrechnen! \n");
                    ergEnde = umrechnungVonEuro(erg, pound);
                    printf("Das Ergebnis ist: %.2f Pound \n \n", ergEnde);
                    break;
            case 4:
                    printf("Lass uns in Euro umrechnen! \n");
                    ergEnde = umrechnungVonEuro(erg,1);
                    printf("Das Ergebnis ist: %.2f Euro \n \n", ergEnde);
                    break;


            case 0: printf("Beenden \n");
                    break;

            default:printf("Herst gib a Zahl von 0 bis 3 ein! \n \n");
            break;
        }
    }
    return 0;
}


float umrechnungInEuro(float a, float b)
{
    return a*b;

}

float umrechnungVonEuro(float c, float d)
{
    return c/d;

}
