#include <stdio.h>

// USING FOR LOOP
/*int main(){
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum = sum + i;
    }
    printf("Sum of first 10 natural numbers = %d", sum);
    return 0;
}
*/

// DO-WHILE LOOP
/*int main(){
    int sum = 0, i=1;
    do{
        sum+=i;
        i++;
    } while(i<=10);
    printf("sum for first 10 natural numbers = %d", sum);

    return 0;
}
   */ 

//WHILE LOOP
int main(){
    int sum = 0, i=1;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("sum for first 10 natural numbers = %d", sum);
}