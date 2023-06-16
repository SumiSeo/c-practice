#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main()
{	
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';
	int * pAge = &age;
	double * pGpa = &gpa;
	char * pGrade = &grade;

	printf("age's memory address is %p", pAge);
	printf("age's memory address is %p", pGpa);
	printf("age's memory address is %p", pGrade);
	return 0;
}


// return type of function//

