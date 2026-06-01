/* Student Placement Management System

A college placement cell requires a C program to manage student placement registrations and generate reports. The program should allow the user to enter the number of students registering for placements and dynamically allocate memory to store their records. For each student, the program must collect details such as name, age, and placement test marks. Based on the entered information, it should determine whether the student is eligible for placements by checking if the student is at least 18 years old and has scored a minimum of 60 marks. The program should also assign grades according to the marks obtained and store all student information using appropriate data structures. A menu-driven interface should be provided to allow the user to view all student records, display only the eligible students, and view placement statistics such as total marks, average marks, and highest marks. The program should make effective use of functions to organize different tasks, loops to process multiple student records, conditional statements to implement decision-making logic, switch-case statements for menu selection, pointers to access dynamically allocated data, and proper memory management techniques to allocate and release memory before program termination. This system should provide a complete and user-friendly solution for managing and analyzing student placement data. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    int marks;
    char grade;
    int eligible;
};

char calculateGrade(int marks)
{
    if (marks >= 80)
        return 'A';
    else if (marks >= 70)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else
        return 'D';
}

int checkEligibility(int age, int marks)
{
    if (age >= 18 && marks >= 60)
        return 1;
    else
        return 0;
}

void displayStudents(struct Student *students, int n)
{
    int i;

    printf("\n---------------------------------------------\n");
    printf("Student Report\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name      : %s\n", students[i].name);
        printf("Age       : %d\n", students[i].age);
        printf("Marks     : %d\n", students[i].marks);
        printf("Grade     : %c\n", students[i].grade);

        if (students[i].eligible)
            printf("Eligible  : Yes\n");
        else
            printf("Eligible  : No\n");
    }
}

void displayEligibleStudents(struct Student *students, int n)
{
    int i;
    int found = 0;

    printf("\nEligible Students\n");

    for (i = 0; i < n; i++)
    {
        if (students[i].eligible)
        {
            printf("%s\n", students[i].name);
            found = 1;
        }
    }

    if (!found)
        printf("No eligible students found.\n");
}

void displayStatistics(struct Student *students, int n)
{
    int i;
    int total = 0;
    int highest = students[0].marks;
    float average;

    for (i = 0; i < n; i++)
    {
        total += students[i].marks;

        if (students[i].marks > highest)
            highest = students[i].marks;
    }

    average = (float)total / n;

    printf("\nStatistics\n");
    printf("Total Marks   : %d\n", total);
    printf("Average Marks : %.2f\n", average);
    printf("Highest Marks : %d\n", highest);
}

int main()
{
    int n;
    int i;
    int choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *students;

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        students[i].grade = calculateGrade(students[i].marks);

        students[i].eligible =
            checkEligibility(students[i].age,
                             students[i].marks);
    }

    printf("\nStudent Serial Numbers\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    while (1)
    {
        printf("\n");
        printf("1. View All Students\n");
        printf("2. View Eligible Students\n");
        printf("3. View Statistics\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayStudents(students, n);
                break;

            case 2:
                displayEligibleStudents(students, n);
                break;

            case 3:
                displayStatistics(students, n);
                break;

            case 4:
                free(students);
                printf("Program Ended.\n");
                return 0;

            default:
                printf("Invalid Choice.\n");
        }
    }

    return 0;
}