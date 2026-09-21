//Program to find greatest of 10 integers
#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j;

    printf("Enter 10 numbers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",
          &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    int greatest = a;

    if (b > greatest) greatest = b;
    if (c > greatest) greatest = c;
    if (d > greatest) greatest = d;
    if (e > greatest) greatest = e;
    if (f > greatest) greatest = f;
    if (g > greatest) greatest = g;
    if (h > greatest) greatest = h;
    if (i > greatest) greatest = i;
    if (j > greatest) greatest = j;

    printf("The greatest number is: %d", greatest);

    return 0;
}
/*ALGORITHM:
1. START  
2. Declare an array of 10, greatest
3. Read
4. Define greatest
5. traverse and compare
6. assign greatest = largest number
7. output greatest
8. STOP*/
