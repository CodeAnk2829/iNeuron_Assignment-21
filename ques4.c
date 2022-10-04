/* Function to find the highest salary employee from a given array of 2
employees.[Refer structure from question 1] */
#include <stdio.h>
#include <string.h>
struct Employee
{
    int Eid;
    char Ename[50];
    float salary;
};
void input(struct Employee E[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        scanf("%d", &E[i].Eid);
        fflush(stdin);
        fgets(E[i].Ename, 50, stdin);
        E[i].Ename[strlen(E[i].Ename) - 1] = '\0';
        scanf("%f", &E[i].salary);
    }
}

int main()
{
    struct Employee E[2];
    input(E, 2);
    if(E[0].salary > E[1].salary) {
        printf("Employee %d has more salary", E[0].Eid);
    } else {
        printf("Employee %d has more salary", E[1].Eid);
    }
    return 0;
}