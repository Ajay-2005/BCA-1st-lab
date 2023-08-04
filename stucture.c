#include <stdio.h>

struct student {
    char name[15];
    int rollno;
    int total;
    int marks[3];
};
void main() {
    int i, j;
    struct student s[10];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter a student name: ");
        scanf("%s", s[i].name);
        printf("Enter a rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter marks for three subjects: ");
        s[i].total = 0;
        for (j = 0; j < 3; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }
    printf("Student records\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Total Marks: %d\n", s[i].total);
    }
    
}
