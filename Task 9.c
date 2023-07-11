#include "stdlib.h"
#include "stdio.h"

int main(){
    //Declaring and initializing parameters
    int num1, num2, temp, temp2,  count = 0, steps = 0;
    //Input of variables by the user
    printf("Enter two numbers (number 2 > number 1):\n");
    scanf("%d %d", &num1, &num2);
    //verification of an admissible condition
    if (num2 < num1){
        printf("Incorrect data!\n");
        system("pause");
        return 1;
    } else {
        //step count with corresponding user data
        temp = (num2 + num1)/2;
        temp2 = num1;
        for (int i = 1; temp > temp2; ++i, ++count) {
            temp2 += i;
        }
        temp2 = num1;
        //First half
        temp = count;
        printf("%d ", temp2);
        for (int i = 1 ;temp > 0 ;++i, --temp) {
            temp2 += i;
            steps++;
            printf("%d ", temp2);
        }
        //If sum of number 1 and number 2 isn't odd - we need to delete one step
        if ((num1+num2)%2 != 0){
            count--;
        }
        //Second half
        for (;count > 0 ; --count) {
            temp2 += count;
            steps++;
            printf("%d ", temp2);
        }

        //Output of results
        printf("\nSteps: %d\n", steps);
        system("pause");
        return 0;
    }
}
