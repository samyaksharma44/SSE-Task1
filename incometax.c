#include<stdio.h>
int main(){
    printf("Enter your income: ");
    int income, tax=0;
    scanf("%d", &income);

    if(income<250000){
        printf("You are free from income tax \n");
    }

    else if(income>=250000 && income<500000){
        tax = 0.05 * (income-250000); 
        printf("You fall in the category of income tax of 5%% \n");
    }

    else if(income>=500000 && income<1000000){
        tax = 0.05 * (500000-250000) + 0.2*(income-500000);
        printf("You fall in the category of income tax of 20%% \n");
    }

    else{
        tax = 0.05 * (500000-250000) + 0.2*(1000000-500000) + 0.3*(income - 1000000);
        printf("You fall in the category of income tax of 30%% \n");
    }

    printf("Your total payable tax on your income of %d is: %d", income,tax);

    return 0;
}