// Function to sort employees according to their salaries [ refer structure from question 1]
#include <stdio.h>
#include <string.h>
struct Employee
{
    int Eid;
    char Ename[50];
    float salary;
};
void sortBySalary(struct Employee E[], int size)
{
    int r, i;
    struct Employee temp;
    for(r = 1; r < size; ++r)
    {
        for(i = 0; i < size - r; ++i)
        {
            if(E[i].salary > E[i + 1].salary)
            {
                temp = E[i];
                E[i] = E[i + 1];
                E[i + 1] = temp;
            }
        }
    }
}