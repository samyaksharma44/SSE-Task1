#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int div;
    div = num%97;

    if (div == 0){
        printf("The number is divisible by 97");
    }

    else{
        printf("The number is not divisble by 97");
    }
    return 0;

}