

#include <stdio.h>

struct biwashCompany
{
    char empName[30];
    int empAge;
    char empAddr[30];
    int empSalary;
} emp[100];
int main()
{

    int empNum, i;

    printf("Enter the number of Employee: ");
    scanf("%d", &empNum);

    for (i = 1; i <= empNum; i++)
    {
        printf("Enter %d Employee's Name Age Address Salary\n", i);
        scanf("%s %d %s %d", emp[i].empName, &emp[i].empAge, emp[i].empAddr, &emp[i].empSalary);
    }

    printf("\n\n Displaying the Details: \n\n");

    for (i = 1; i <= empNum; i++)
    {
        printf("Name\t Age\t Address\tSalary\n");
        printf("%s\t %d\t %s\t\t%d \n", emp[i].empName, emp[i].empAge, emp[i].empAddr, emp[i].empSalary);
        printf("\n");
    }
    return 0;
}