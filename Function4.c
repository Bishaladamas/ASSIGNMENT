//
// Created by bisha on 11-10-2023.
//
#include <stdio.h>
int year (int y)
{
    if (y%4==0&&y%100=0&&y%400=0)
    {
        printf("Y is a leap year ");
    }
    else
    {
        printf (" Y is not a leap year ");
    }
}
int main ()
{
    int y ;
    printf ("Enter the year :");
    scanf ("%d",&y);
    year(y);
}