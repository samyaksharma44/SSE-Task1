#include <stdio.h>
int main(){
    printf("Enter the character: ");
    char ch;
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122){
        printf("This character is lowercase ");

    }
    else{
        printf("This character is not lowercase ");
    }
    return 0;
}