#include <stdio.h>
int findpow(int a, int b)
{
    int c=1;
    for(int i=1; i<=b; i++){
        c = c*a;

    }
return c;
}

int main(){
    printf("\nEnter the base number: ");
    int base;
    scanf("%d", &base);

    printf("Enter the power number: ");
    int power;
    scanf("%d", &power);

    int result;
    result = findpow(base,power);

    printf("\n%d raised to the power of %d is: %d", base, power, result);
}
