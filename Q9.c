#include<stdio.h>
int main()
{
	int c;

	printf("\n 1 for Monday\n 2 for Tuesday\n 3 Wednesday \n 4 Thursday \n 5 Friday \n 6 for Saturday\n 7 Sunday");
	printf("\n Enter your choice from above menu: ");
	scanf("%d",&c);

	switch(c)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
		printf("unavailable");
		break;
	}
	return 0;
}
