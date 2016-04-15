#include <stdio.h>
#include <stdlib.h>

void expInfo(int currentLvl, float currentPLvl, long *currentXp, long *diffXp)
{

    *diffXp = (expTab(currentLvl) - expTab(currentLvl-1) * (currentPLvl / 100.0));
    //*currentXp = expTab(currentLvl-1) + (expTab(currentLvl) - expTab(currentLvl-1) * (currentPLvl / 100.0));

}
