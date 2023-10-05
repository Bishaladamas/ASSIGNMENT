//
// Created by bisha on 06-10-2023.
//
#include <stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        int p=1;
        for(int j=1;j<=i;j++)
        {
            printf(" %d",p++);
        }
        printf("\n");
    }
}