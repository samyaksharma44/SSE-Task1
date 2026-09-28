#include <stdio.h>
int main(){
    float tempc;
    printf("Enter the temperature in Celsius: ");
    scanf("%f" , &tempc);

    float tempf;
    tempf = tempc*1.8 + 32;
    printf("The temperature in faranheit is: %f", tempf);
    return 0; 
}
