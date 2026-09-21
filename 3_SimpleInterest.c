// Program to find Simple Interest

#include <stdio.h>
int main(){
    int principal;
    printf("Enter the Principal amount: ");
    scanf("%d" , &principal);

    int noy;
    printf("Enter the number of years: ");
    scanf("%d" , &noy);

    int roi;
    printf("Enter the rate of interest: ");
    scanf("%d" , &roi);

    float si = (principal*noy*roi)/100.0;
    printf("The Simple Interest is: %f", si);

    return 0;

}