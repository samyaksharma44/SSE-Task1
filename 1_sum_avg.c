// Program to find sum and average of two numbers
#include <stdio.h>
int main(){
    int num1;
    printf("Enter the first number: ");
    scanf("%d" , &num1);

    int num2;
    printf("Enter the second number: ");
    scanf("%d" , &num2);

    int sum;
    sum = num1 + num2;
    printf("The sum of the two numbers is: %d \n", sum);

    float avg;
    avg = sum/2.00;
    printf("The average of the two number is: %f \n", avg);

    return 0;

}