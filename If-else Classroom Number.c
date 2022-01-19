#include <stdio.h>

int main() {
int classNumber;
int roomCapacity;
int numstudentsEnrolled;
int seatsFilled;
int seatsAvail;

printf("Created by: Luzong, John Roland C.\n");
printf("BSIS-1AM\n\n\n");

	printf("Enter Class Number:\t");
	scanf("%d", &classNumber);

	printf("Room Capacity:\t");
	scanf("%d", &roomCapacity);

	printf("Number of Students Enrolled:\t");
	scanf("%d", &numstudentsEnrolled);

	seatsAvail = roomCapacity - numstudentsEnrolled;

	printf("\nStatus:");

	if( seatsAvail > 0 ){
        printf("\nNot Filled\n");
	}
        else {
        printf("\nFilled\n"); }

    printf("Classroom Number: %d\n", classNumber);
    printf("Room Capacity: %d\n", roomCapacity);
    printf("Seats Available: %d\n", seatsAvail);

  return 0;
}


