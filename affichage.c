#include <stdio.h>
#include <stdlib.h>


void affichage()
{
    int currentLvl = 0, currentClassLvl = 0, currentCRank = 0, j = 0, x = 0, afterCardCRank = 0;
    float currentPLvl = 0.0, currentPClassLvl = 0.0;
    long currentXp = 0, diffXp = 0, totalCardXp = 0, i = 0, totalCardClass = 0, afterCardXp = 0, afterCardLvl = 0, diffClassXp = 0, currentClassXp = 0, afterCardClassXp = 0, afterCardClassLvl = 0;
    afterCardCRank = currentCRank;

    choixCard(&totalCardXp, &totalCardClass);
    getInfoXp(&currentLvl, &currentPLvl);
    getInfoClass(&currentClassLvl, &currentCRank, &currentPClassLvl);

    printf("Your current level is : %d\n", currentLvl);
    printf("You already get %f percent of the next level. \n", currentPLvl);

    i = (expTab(currentLvl) - expTab(currentLvl-1));
    diffXp = i * (currentPLvl / 100.0);
    currentXp = expTab(currentLvl-1) + diffXp;

    printf("Until now, you have accumulated %ld exp since your created your char\n", currentXp);
    printf("You already get %ld XP since your current level. \n", diffXp);

    afterCardXp = totalCardXp + currentXp;

    for(i = 0; i !=300; i++)
    {
        if (expTab(i-1) < afterCardXp)
        {
            afterCardLvl = i + 1;
        }
    }

    printf("You have %ld exp saved in exp cards\n", totalCardXp);
    printf("Your total exp since the beginning, including the exp from your cards: %ld \n", afterCardXp);
    printf("Your actual level after popping your exp cards is %ld\n\n", afterCardLvl);
    printf("--------------------------------------------------------\n\n");
    printf("You class level is %d with %f percent\n", currentClassLvl, currentPClassLvl);

    j = classTab(currentCRank-1, currentClassLvl) - classTab(currentCRank-1, currentClassLvl-1);
    diffClassXp = (currentPClassLvl / 100.0) * j;
    currentClassXp = classTab(currentCRank-1, currentClassLvl-1) + diffClassXp;

    afterCardClassXp = totalCardClass + currentClassXp;

    for(x = 0; x !=14; x++)
    {
        if (classTab(currentCRank-1, x) < afterCardClassXp)
        {
            afterCardClassLvl = x + 1;
        }
    }

    /*if (afterCardClassLvl > 15)
    {
        afterCardCRank = currentCRank + 1;
        for (x = 0; x != 14; x++)
        {
            if (classTab(afterCardCRank-1, x) < afterCardClassXp)
            {
                afterCardClassLvl = x + 1;
            }
        }
    }*/

    printf("%f percent of level %d on rank %d is equal to %ld exp\n", currentPClassLvl, currentClassLvl, currentCRank, diffClassXp);
    printf("Required exp to advance from class %d to %d: %ld\n", currentClassLvl, currentClassLvl+1, j);
    printf("You have %ld class exp saved in exp cards.\n", totalCardClass);
    printf("Until now you have gained %ld class exp.\n", currentClassXp);
    printf("Your char have a total of %ld class exp (including exp from your cards)\n", afterCardClassXp);
    printf("If you use all your exp cards, you will end up class %ld on rank %d\n\n",afterCardClassLvl, currentCRank);
}
