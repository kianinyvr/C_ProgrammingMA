#include <stdio.h>

int main(int argc, char const *argv[])
{
	char first_name[10];

	printf("Enter you first name: ");
	scanf("%9s",first_name);

	printf("Thanks %s.\n",first_name);
	return 0;
}