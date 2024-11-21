#include<stdio.h>
void main()
{
    int num,i,count,first,last;
    printf("Enter the number :- ");
    scanf("%d",&num);
    last = num%10;
    for ( i = 1 ; num!=0;i++)
    {
        first = num ;
        num = num/10;
        count ++; 
        printf ("Number of count :- %d ",count );
        printf("first %d last %d",first,last);
        printf("addition of first and last number  is  :- %d",first+ last);

    }
}
