/* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user. */

#include <stdio.h>
int main(){
    printf("NOTE: Enter all marks out of 100 \n");
    int marks1, marks2, marks3;
    printf("Enter marks1: ");
    scanf("%d", &marks1);
    printf("Enter marks2: ");
    scanf("%d", &marks2);
    printf("Enter marks3: ");
    scanf("%d", &marks3);
    printf("The marks are %d, %d and %d", marks1, marks2, marks3);
    return 0;
    if (marks1<33 || marks2<33 || marks3<33){
        printf("You have failed in an individual subject(s)");
    }
    else if ((marks1 + marks2 + marks3)/3 <40){
        printf("You have failed due to insufficient aggregate percentage");
    }
    else{
        printf("You have passed!");
    }
    return 0;
}