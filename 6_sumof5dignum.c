#include <stdio.h>
int main(){
    int n, digit, og, sum=0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &n);
    og = n;

    for(int i=1; i<=5; i++){
     digit = n%10;
     sum = sum + digit;
     n = n/10;   
    }
   

    printf("The sum of the digits of %d is: %d", og, sum);

    return 0;
}