#include<stdio.h>
#include<stdlib.h>

int main () {
int minweight = 140;
int maxweight = 160;
int minage = 25;
int maxage = 45;
int personWeight, personAge, smoker;

printf("Created by: Luzong, John Roland C.\n");
printf("BSIS-1AM\n\n\n");

    printf("Enter the Weight of the Candidate:\t    ");
    scanf("%d", &personWeight);

    printf("Enter the Age of the Candidate:\t    ");
    scanf("%d", &personAge);

    printf("Enter 1 if the person is a Smoker and 0 if not:\t ");
    scanf("%d", &smoker);

    if(personWeight >= minweight && personWeight <= maxweight) {
        if(personAge >= minage && personAge <= maxage) {
            if (smoker == 0) {
                printf("\n\n\nThe Astronaut is accepted\n\n\n"); }}}
        else printf("The Astronaut is not accepted");

            return 0;
            }
