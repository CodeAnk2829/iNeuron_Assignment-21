// Program to store information of n students and display them using structure
#include <stdio.h>
#include <string.h>
struct Student
{
    int rollNumber;
    char Name[30];
    char Branch[30];
};
void input(struct Student s[], int i) 
{
    scanf("%d", &s[i].rollNumber);
    fflush(stdin);
    fgets(s[i].Name, 30, stdin);
    s[i].Name[strlen(s[i].Name) - 1] = 0;
    fgets(s[i].Branch, 30, stdin);
    s[i].Branch[strlen(s[i].Branch) - 1] = 0;
}
void display(struct Student s[], int i) 
{
    printf("%d    %s    %s\n", s[i].rollNumber, s[i].Name, s[i].Branch);
}
int main() {
    int n, i;
    printf("Enter no. of students\n");
    scanf("%d", &n);
    struct Student s[n];
    for(i = 0; i < n; ++i) {
        input(s, i);
    }
    for(i = 0; i < n; ++i) {
        display(s, i);
    }
    return 0;
}