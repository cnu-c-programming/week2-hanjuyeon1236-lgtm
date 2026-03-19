#include <stdio.h>

int main()
{
    int age;
    char grade;
    float gpa;
    
    scanf(" %d", &age) ;
    printf("Enter age: ") ;

    scanf(" %c", &grade) ;
    printf("Enter grade: ") ;

    scanf(" %.6f\n", &gpa) ;
    printf("Enter gpa: ") ;
    
    return 0;
}
