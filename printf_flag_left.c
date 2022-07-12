#include "main.h"

/**
* main - handles the field width 
* for non-custom conversion specifiers.
*/

int main()
{
	char grade = 'A';
	char name[] = "Sbusiso";
	char course[] = "ALX Software Engineering";
	int age = 32;
	double average = 145.2;
	
	printf(%s studies %s\n, name, course);
	printf(%d year old %s studies %c grade %s\n, age, name, grade, course);
	printf("The average score for %s is %.1lf.\n", name, average);
	
	printf("%-2.1lf\n, average);
	printf("%1d\n, age);
	return 0;
}