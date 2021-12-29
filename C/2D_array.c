#include<stdio.h>
int main()
{
	int i,j,arr[3][3],sum=0;
	int (*p)[3];
	p = arr;
	printf("Enter the elements into the 3x3 matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", *(p+i)+j);
		}
	}
    // p = arr;
    printf("\nOriginal Array:\n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        	printf("%d  ", *(*(p+i)+j)); 
		}
		printf("\n");
    }
    // p = arr;
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
			sum += *(*(p+i)+j);
		}
    }
    printf("Sum of all diagonal elements of the 3x3 array: %d", sum);
}