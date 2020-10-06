#include<stdio.h>
#include<conio.h>

void main()
{
//Switch statements

clrscr();
int choice;

printf("Enter the choice:");
scanf("%d",&choice);


//switch statments

switch(choice)
{
	case 1:
	      printf("\n Sunday");
	      break;

	case 2:
	      printf("\n Monday");
	      break;

	case 3:
	      printf("\n Tuesday");
	      break;

	case 4:
	       printf("\n Wednesday");
	       break;

	case 5:
	       printf("\n Thursday");
	       break;
	case 6:
	       printf("\n Friday");
	       break;
	case 7:
		printf("\n Saturday");
		break;


	default:
	      printf(" Try some thing from the given choice");
	      break;


}



getch();
}
