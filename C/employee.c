#include <stdio.h>
struct Employee {
    int empno;
    char empname[32];
    char deptname[20];
    int salary;
};
int main()
{
    int i;
    int n ;
    printf("Enter the number of employees:");
    scanf("%d",&n); 
    struct Employee employees[n];
    printf("Enter the details of %d Employees: \n \n",n);
    for(i=0; i<n; i++) 
    {
        printf("Employee (%d):- \n",i+1);
        printf("Emp No.: ");
        scanf("%d", &employees[i].empno);
        printf("Emp Name: ");
        scanf("%s", employees[i].empname);
        printf("Department Name: ");
        scanf("%s", employees[i].deptname);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        printf("\n");
    }
    printf("-------------- All Employees Details ---------------\n");
    printf("Emp No.\t\tEmp Name\t\tDepartment Name\t\tSalary\n");
    for(i=0; i<n; i++)
	{
    	printf("%d\t\t%s\t\t\t%s\t\t\t%d\n", employees[i].empno, employees[i].empname, employees[i].deptname, employees[i].salary);
    }
    return 0;
}