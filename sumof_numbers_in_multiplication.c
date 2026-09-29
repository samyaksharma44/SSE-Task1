#include <stdio.h>
int main(){
    int sum = 0, mult=1;
    for(int i=1; i<=10; i++){
        mult = i*8;
        sum += mult;
    }
    printf("The sum of the table of 8 = %d", sum);
}