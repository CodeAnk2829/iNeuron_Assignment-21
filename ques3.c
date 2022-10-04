// Function to display Employee data
#include <stdio.h>
struct Employee
{
    int Eid;
    char Ename[50];
    float salary;
};
void display(struct Employee E)
{
    printf("%d %s %.2f", E.Eid, E.Ename, E.salary);
}