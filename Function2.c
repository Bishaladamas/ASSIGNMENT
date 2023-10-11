//
// Created by bisha on 11-10-2023.
//
#include <stdio.h>
int greater (int a ,int b)
{
    if (a > b) {
        printf("A is greater");
    } else {
        printf("B is greater");
    }
}
int main ()
{
    int a,b;
    printf ("Enter the numbers: ");
    scanf ("%d %d",&a,&b);
    greater (a,b);
}