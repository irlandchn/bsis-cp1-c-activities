#include <stdio.h>
int main () {
    float popWeek1, popWeek2, popDiff, growthRate, popWeek3;

    printf("Enter the Insect Population for Week 1: " );
    scanf("%f", &popWeek1);

    printf("Enter the Insect Population for Week 2: " );
    scanf("%f", &popWeek2);

    popDiff = popWeek2 - popWeek1;

    growthRate = popDiff / popWeek1;

    popWeek3 = (popWeek2 * growthRate) + popWeek2;

    printf("The Insect Population for Week 3 is %.2f", popWeek3);
    return 0;
    }
