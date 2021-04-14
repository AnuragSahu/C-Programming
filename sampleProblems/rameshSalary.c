#include<stdio.h>

int main()
{
	int rameshSalary;
	printf("Enter Ramesh's Salary : ");
	scanf("%d",&rameshSalary);
	int grossSalary;
	grossSalary = rameshSalary + 0.4*rameshSalary + 0.2*rameshSalary;
	printf("The gross Salary of Ramesh is : %d\n", grossSalary);
	return 0;
}
