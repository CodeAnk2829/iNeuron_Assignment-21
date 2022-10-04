// Program to store information of 10 students and display them using structure.
#include <stdio.h>
struct Student
{
    int rollNumber;
    char Name[30];
    char Branch[100];
};
void display(struct Student s[], int i)
{
    printf("%d    %s    %s\n", s[i].rollNumber, s[i].Name, s[i].Branch);
}
int main()
{
    struct Student s[10] = {{1, "Ankit Kumar", "Computer Science"},
                            {2, "Jayesh Jarolia", "Electronics and Communication"},
                            {3, "Aryan Tripathi", "Matellurgical Engineering"},
                            {4, "Prince Sinha", "Electronic and Communication"},
                            {5, "Gaurav Shukla", "Mechanical Engineering"},
                            {6, "Milind Dhundhe", "Mechanical Engineering"},
                            {7, "Kyama Sreevasthav", "Computer Science"},
                            {8, "Ritesh Deshmukh", "Chemical Engineering"},
                            {9, "Vivek Singh", "Electrical Engineering"},
                            {10, "Aniket Sharma", "Computer Science"}};
                            
    int i;
    for(i = 0; i < 10; ++i) {
        display(s, i);
    }                        
    return 0;
}