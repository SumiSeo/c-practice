#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // What type of data ? 1.char 2. int
    int age = 29;
    double gpa = 3.7;
    double temperature = 37.0;
    char grade = 'A';

    // Special type of data type
    char phrase[] = "Sumi is pretty";

   
    /*printf("\nHello world\n");
    printf("I am %d years old.", age);
    printf("\n");*/
    printf("I heard that %s. Yeah, me too. I think it is so true", phrase);

    // working with numbers
    int num = 6;
    printf("%f", pow(2,3) );



    //constants
    const int NUMBER =5 ;
    printf("This is number %d",NUMBER);
    
    return 0;
}