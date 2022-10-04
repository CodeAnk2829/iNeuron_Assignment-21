/* Program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student. */
#include <stdio.h>
#include <string.h>
struct Marks 
{
    int rollNumber;
    char name[30];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
void input(struct Marks s[], int i)
{
    printf("Enter roll no. of the student: ");
    scanf("%d", &s[i].rollNumber);
    fflush(stdin);
    printf("Enter name of the student\n");
    fgets(s[i].name, 30, stdin);
    s[i].name[strlen(s[i].name) - 1] = 0;
    printf("Enter Marks of Chemistry, Maths and Physics: ");
    scanf("%f %f %f", &s[i].chem_marks, &s[i].maths_marks, &s[i].phy_marks);
}
void display_percentage(struct Marks s) 
{
    printf("The overall percentage of the student in the three subject is given by\n");
    float result = (s.chem_marks + s.maths_marks + s.phy_marks) / 3.0;
    printf("%.2f %%\n", result);
}
int main()
{
    struct Marks s[5];
    int i;
    for(i = 0; i < 5; ++i) {
        input(s, i);
    }
    for(i = 0; i < 5; ++i) {
        display_percentage(s[i]);
    }
    return 0;
}