#include <stdio.h>

float avg(int a, int b, int c){
    return (a+b+c)/3;
}

int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);
    
    printf("The average is: %f", avg(a,b,c));
}