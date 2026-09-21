//Program to print the following pattern
#include <stdio.h>
int main(){
    printf("Enter number of rows: ");
    int row;
    scanf("%d", &row);

    /*printf("Enter number of columns: ");
    int col;
    scanf("%d", &col);*/

    int i,j; 

    for(i=1; i<=row; i++) {

        for(j=1; j<=i; j++){

            printf("*  ");
        }

        printf("\n");
    }

}