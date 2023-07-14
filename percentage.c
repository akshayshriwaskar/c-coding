#include<stdio.h>
#include<conio.h>
void main()
{
    int per;
    printf("Enter Percentage:");
    scanf("%d",&per);
    if (per>=90)
    {
        printf("Outstanding");
    }
    else if (per>=80 && per<=90)
    {
        printf("A+Grade",per);
    }
    else if(per>70 && per<=60)
    {
        printf("A Grade",per);
    }
    else if (per<60 && per>35)
    {
        printf("B Grade",per);
    }
    else
    {
        printf("Sorry you are fail....")
    }
    getch();
}