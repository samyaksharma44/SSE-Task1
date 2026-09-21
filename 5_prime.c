//Program to find whether the entered number is prime
#include <stdio.h>
int main(){
    printf("Enter a number: ");
    int num1, i, count = 0;
    scanf("%d", &num1);

    for(i = 1; i <= num1; i++)
    {
        if(num1 % i == 0)
            count++;
    }

    if(count == 2)
        printf("%d is a prime number" , num1);
    else
        printf("%d is not a prime number", num1);

    return 0;

}

/*ALGORITHM:
1. START  st
2. Declare Variables(num,i,count)
3. Read
4. Check divisibility
5. Check count
6. output prime or not
7. STOP*/