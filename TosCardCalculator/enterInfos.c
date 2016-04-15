#include <stdio.h>
#include <stdlib.h>

void getInfoXp(int *currentLvl, float *currentPLvl)
{
        printf("Enter your current level : \n");
        scanf("%d", currentLvl);
        printf("Enter the percentage of your current level : \n");
        scanf("%f", currentPLvl);
}

void choixCard(long *totalXp, long *totalClass)
{
    int card1 = 0, card2 = 0, card3 = 0, card4 = 0, card5 = 0, card6 = 0, card7 = 0, card8 = 0, card9 = 0, card10 = 0, card11 = 0, card12 = 0;
    int choix = 0, loop = 1;
    const long cardTab[24] = {500, 385, 2686, 2068, 8442, 6500, 22860, 17602, 24571, 18919, 60312, 46440, 142150, 109455, 209334, 161187, 237943, 183216, 541023, 416587, 608155, 468279, 1344829, 1035518};

    while(loop != 0)
    {

            printf("Choisissez un lvl de Card : \n");
            scanf("%d", &choix);

        do
        {
            switch(choix)
            {
                case 1:
                printf("Combien avez vous de Card lvl 1 ? \n");
                scanf("%d", &card1);
                break;
                case 2:
                printf("Combien avez vous de Card lvl 2 ? \n");
                scanf("%d", &card2);
                break;
                case 3:
                printf("Combien avez vous de Card lvl 3 ? \n");
                scanf("%d", &card3);
                break;
                case 4:
                printf("Combien avez vous de Card lvl 4 ? \n");
                scanf("%d", &card4);
                break;
                case 5:
                printf("Combien avez vous de Card lvl 5 ? \n");
                scanf("%d", &card5);
                break;
                case 6:
                printf("Combien avez vous de Card lvl 6 ? \n");
                scanf("%d", &card6);
                break;
                case 7:
                printf("Combien avez vous de Card lvl 7 ? \n");
                scanf("%d", &card7);
                break;
                case 8:
                printf("Combien avez vous de Card lvl 8 ? \n");
                scanf("%d", &card8);
                break;
                case 9:
                printf("Combien avez vous de Card lvl 9 ? \n");
                scanf("%d", &card9);
                break;
                case 10:
                printf("Combien avez vous de Card lvl 10 ? \n");
                scanf("%d", &card10);
                break;
                case 11:
                printf("Combien avez vous de Card lvl 11 ? \n");
                scanf("%d", card11);
                break;
                case 12:
                printf("Combien avez vous de Card lvl 12 ? \n");
                scanf("%d", card12);
                break;
                default:
                break;
            }
        }while(choix < 1 || choix > 12);



                        printf("Voulez vous ajouter d'autres cards? \n");
                        printf("Oui (1) Non (0)\n");
                        scanf("%d", &loop);

    }

    *totalXp = (card1 * cardTab[0]) + (card2 * cardTab[2]) + (card3 * cardTab[4]) + (card4 * cardTab[6]) + (card5 * cardTab[8]) + (card6 * cardTab[10]) + (card7 * cardTab[12]) + (card8 * cardTab[14]) + (card9 * cardTab[16]) + (card10  * cardTab[18]) + (card11 * cardTab[20]) + (card12 * cardTab[22]);
    *totalClass = (card1 * cardTab[1]) + (card2 * cardTab[3]) + (card3 * cardTab[5]) + (card4 * cardTab[7]) + (card5 * cardTab[9]) + (card6 * cardTab[11]) + (card7 * cardTab[13]) + (card8 * cardTab[15]) + (card9 * cardTab[17]) + (card10  * cardTab[19]) + (card11 * cardTab[21]) + (card12 * cardTab[23]);
}

void getInfoClass(int *currentClassLvl, int *currentCRank, int *currentPClassLvl)
{
    printf("Enter your current class level : \n");
    scanf("%d", currentClassLvl);
    printf("Enter the percentage of your current level : \n");
    scanf("%f", currentPClassLvl);
    printf("Enter your current class Rank : \n");
    scanf("%d", currentCRank);
}
