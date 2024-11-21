#include<stdio.h>
void main()
{
    int num,i,count=0;
    printf("Enter the number :- ");
    scanf("%d",&num);

    for(i=1;num!=0;i++)
    {
        num = num/10;
        count ++;
    }
    printf("Number of count :- %d ", count);

}
