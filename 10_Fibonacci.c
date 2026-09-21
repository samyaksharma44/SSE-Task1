#include <stdio.h>
int main(){
    printf("Enter the number of terms: ");
    int n, a=0, b=1, c;
    scanf("%d", &n);

    printf("\nFIBONACCI SERIES: \n");

    for(int i=1; i<=n; i++){
        printf("%d \n", a);
        c = a+b;
        a=b;
        b = c;

    }
}