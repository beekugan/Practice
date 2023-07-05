#include <stdio.h>

int main() {
    int t1, t2, t3;
    float time;

    // User input of time t1, t2, t3, which will indicate how long it takes each of the guests to eat the cake
    printf("Enter three values:\n ");
    scanf("%d %d %d", &t1, &t2, &t3);
    // Checking the condition given in the problem (previous values when entering must be greater than 10000)
 if(t1>10000 | t2>10000 |  t3>10000){
   printf("Error! Enter a number not exceeding 10000!");
   return 0;
 }
  else{
    // Finding the total time, that is, we divide the whole part, in this case the cake, by the amount of time needed by each of the guests
    time = (1.0)/((1.0/t1) + (1.0/t2) + (1.0/t3));
    // Output of the result is rounded to 2 decimal places
    printf("The time required to eat the pie is %.2f hours\n", time);
  }
}
