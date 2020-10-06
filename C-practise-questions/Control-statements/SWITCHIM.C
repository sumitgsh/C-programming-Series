#include<stdio.h>
#include<conio.h>
void main()
{

clrscr();
int choice,no;
//Menu
printf("\n\t<--Menu-->");
printf("\n1.Check for odd or even");
printf("\n2.Try from the above");

printf("\nEnter your choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
       printf("Enter the no to check :");
       scanf("%d",&no);
       if(no%2==0)
       {
	printf("Even");
       }else
       {
	printf("odd");
       }
	break;
case 2:
       printf("Try from above");
       break;
default:
	printf("Select as per given");
}

getch();
}
