#include <stdio.h> 
int gcd(int a, int b);
int lcm(int a, int b); 
int main()
{
	int num1, num2, result;
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);
    result = lcm(num1, num2); 
    printf("LCM of %d and %d is %d.", num1, num2, result);
    return 0; 
}
int gcd(int a, int b) 
{ 
    if (a == 0)
        return b; 
    return gcd(b % a, a); 
}  
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b;
}