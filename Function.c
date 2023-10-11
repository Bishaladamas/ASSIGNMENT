//
// Created by bisha on 11-10-2023.
//
#include <stdio.h>
int swap (int a,int b)
{
    int c;
    c=b;
    b=a;
    a=c;
    printf("The swapped numbers are : %d %d",a,b);
}
int main ()
{
    int a,b;
    printf("Enter two values :");
    scanf("%d %d",&a,&b);
    swap(a,b);
}