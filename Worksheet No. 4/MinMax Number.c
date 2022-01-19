#include <stdio.h>

int main() {
int n1, n2, n3;

system("color 2");

printf("Created by: Luzong, John Roland C.\n");
printf("BSIS-1A-M\n\n\n");

printf("Input the First Number:\t");
scanf("%d", &n1);

printf("Input the Second Number: ");
scanf("%d", &n2);

printf("Input the Third Number:\t");
scanf("%d", &n3);

printf("\nThe Maximum Number is %d", maxNumber(n1, n2, n3));
printf("\nThe Minimum Number is %d\n\n\n", minNumber(n1, n2, n3));
}

int maxNumber(int n1, int n2, int n3) {

    if(n1 >= n2 && n1>=n3) {
    return n1;
    }
    else if(n2 >= n1 && n2>=n3) {
    return n2;
    }
    else if(n3 >= n1 && n3>=n2) {
    return n3;
    }
}
int minNumber(int n1, int n2, int n3) {

    if(n1 < n2 && n1 < n3) {
    return n1;
    }
    else if(n2 < n1 && n2 < n3) {
    return n2;
    }
    else if(n3 < n1 && n3 < n2) {
    return n3;
    }
}

