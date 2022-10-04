// Program to calculate the difference between two time periods.
#include <stdio.h>
struct Time
{
    int day;
    int month;
    int year;
};
int main()
{
    int d, m, y;
    struct Time t1, t2;
    printf("Enter day, month and year\n");
    scanf("%d %d %d", &t1.day, &t1.month, &t1.year);
    printf("Enter day, month and year\n");
    scanf("%d %d %d", &t2.day, &t2.month, &t2.year);
    d = (t1.day > t2.day) ? (t1.day - t2.day) : (t2.day - t1.day);
    m = (t1.month > t2.month) ? (t1.month - t2.month) : (t2.month - t1.month);
    y = (t1.year > t2.year) ? (t1.year - t2.year) : (t2.year - t1.year);
    printf("The difference between the time period is\n");
    printf("%d %d %d", d, m, y);
    return 0;
}