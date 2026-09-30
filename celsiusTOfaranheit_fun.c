#include <stdio.h>

float ctof(float c){
    float f;
    f = (9*c)/5 + 32;
    return f;
}

int main(){
    printf("Enter a temperature in Celsius: ");
    float c;
    scanf("%f", &c);

    printf("This temperature in Faranheit is: %.2f", ctof(c));
}