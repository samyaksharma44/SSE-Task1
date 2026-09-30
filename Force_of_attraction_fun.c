#include <stdio.h>

float force(float m){
    float g = 9.8;
    float force;
    force = m*g;
    return force;
}

int main(){
    printf("Enter the mass of the body: ");
    float m;
    scanf("%f", &m);

    printf("The force of attraction on the body is:  %.2f", force(m));
}