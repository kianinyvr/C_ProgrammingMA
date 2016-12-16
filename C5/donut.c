#include <stdio.h>

int main(int argc, char const *argv[])
{
	


	char answer; //single character to store 'Y' or 'N'

	printf("Would you like a donut? [Y/N] ");

	answer = getchar();

	switch(answer){//respond to answer 

		case 'Y':
		case 'y':
			printf("Here is a donut for you\n");
			break;

		case 'N':
		case 'n':
			printf("Good call, they're fattening\n");
			break;

		default:
			printf("You were supposed to enter Y or N\n");
			break;
	}//end of switch

}