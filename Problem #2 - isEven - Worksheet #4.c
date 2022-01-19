#include <stdio.h>

int main() {
int n;

printf("Created by: Luzong, John Roland C.\n");
printf("BSIS-1AM\n\n\n");

printf("Input a Number:\t");
scanf("%d", &n);

if(isEven(n) ==0)
{

    printf("\n%d is an even number\n\n", n);
}
else
{

    printf("\n%d is an odd number\n\n", n);
}
}
int isEven(int n)
{
        int isEven;

        isEven = n%2;

        return isEven;
}
