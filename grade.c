#include<stdio.h>
void main()
{
    int m;
    printf("\nEnter the marks of the student\n");
    scanf("%d", &m);
    if(m!=0&&m<101)
    {   
        if(m>=85)
        {
            printf("\nThe student mark is %d and the grade is A",m);
        }
        else if(m>=70)
        {
            printf("\n The student mark is %d and the grade is B",m);
        }
        else if(m>=55)
        {
            printf("\n The student mark is %d and the grade is C",m);
        }
        else if(m>=40)
        {
            printf("\n The student mark is %d and the grade is D",m);
        }
        else
        {
            printf("\n The student mark is %d and the grade is F",m);        
        }      
    }    
    else
    printf("\nThe marks enterd is out of range");
}