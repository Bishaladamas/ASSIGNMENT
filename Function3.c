//
// Created by bisha on 11-10-2023.
//
#include<stdio.h>
int sum (int n)
{
      int c = 0;
      for (int i = 0;i<=n;i++)
{
          c=c+i;
}
printf ("%d",c);
}
int main ()
{
    int n ;
    printf("Enter range :");
    scanf ("%d",&n);
    sum (n);
}