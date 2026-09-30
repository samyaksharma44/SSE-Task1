#include <stdio.h>
void printarray(int a[], int n){
        for(int i=0; i<n; i++){
            printf ("%d", a[i]);
        }
        printf("\n");
    }

void reversearray(int a[], int n){
    for(int i=n-1; i>=0; i--){
        printf("%d", a[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    printarray(arr,6);
    reversearray(arr,6);
}