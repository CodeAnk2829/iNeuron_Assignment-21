// Function to take input employee data from the user. [ Refer structure from question 1 ]
#include <stdio.h>
#include <string.h>
struct Employee
{
    int Eid;
    char Ename[50];
    float salary;
};
struct Employee input()
{
    struct Employee E;
    printf("Enter Eid, Ename, Salary: ");
    scanf("%d", &E.Eid);
    fflush(stdin);
    fgets(E.Ename, 50, stdin);
    E.Ename[strlen(E.Ename) - 1] = 0;
    scanf("%f", &E.salary);
    return E;
}
