#include <stdio.h>
#include <string.h>
struct Employee
{
    int Eid;
    char Ename[50];
    float salary;
};
void SortByName(struct Employee *E, int size)
{
    int r, i;
    struct Employee temp;
    for(r = 1; r < size; r++)
    {
        for(i = 0; i < size - r; ++i)
        {
            if(strcmp(E[i].Ename, E[i + 1].Ename) != -1)
            {
                temp = E[i];
                E[i] = E[i + 1];
                E[i] = temp;
            }
        }
    }
}
struct Employee input()
{
    struct Employee E;
    printf("Enter Eid, Ename and Salary: ");
    scanf("%d", &E.Eid);
    fflush(stdin);
    fgets(E.Ename, 50, stdin);
    E.Ename[strlen(E.Ename) - 1] = 0;
    scanf("%f", &E.salary);
    return E;
}

void display(struct Employee E[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        printf("%d %s %f\n", E[i].Eid, E[i].Ename, E[i].salary);
    }
}
int main()
{
    struct Employee E[5];
    int i;
    for (i = 0; i < 5; ++i)
    {
        E[i] = input();
    }
    SortByName(E, 5);
    display(E, 5);
    return 0;
}