#include <stdio.h>
int main (void) {
	int month,flag;
	scanf("%d",&month);
	if (month == 12||month == 1||month == 2)
	{
		flag = 1;
	}
	else if (month == 3||month == 4||month == 5)
	{
		flag = 2;
	}
	else if (month == 6||month == 7||month == 8)
	{
		flag = 3;
	}
	else if (month == 9||month == 10||month == 11)
	{
		flag = 4;
	}
	else ;
	
	switch (flag) {
		case 1	: printf("Winter"); break;
		case 2  : printf("Spring"); break;
		case 3  : printf("Summer"); break;
		case 4	: printf("Autumn"); break;		
		default : printf("No Season");
	}
	return 0;
}

