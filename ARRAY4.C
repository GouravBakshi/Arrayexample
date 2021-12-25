#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,limit,sum=0;
int av;
clrscr();
printf("Enter the limit of the array\n");
scanf("%d",&limit);
printf("Enter the values of the array\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
sum = sum + a[i];
}
printf("The value entered is \n");
for(i=0;i<limit;i++)
{
printf("%d\n",a[i]);
}
av= sum/limit;
printf("The sum of the array is %d",sum);
printf("\nThe average of the array is %d",av);
getch();
}