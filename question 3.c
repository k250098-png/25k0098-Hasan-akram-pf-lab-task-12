#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    char name[50];
    int marks;
};

int main() {
    int numStudents;
    
  
    printf("Enter the number of students: ");
    scanf("%d", &numStudents); 
    

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

  
    if (students == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    
    printf("\n   Enter Data for Students   \n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%49s", students[i].name); 

        printf("Student %d Marks: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    
    printf("\n  Students Who Scored More Than 75 Marks \n");
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > 75) {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("No students scored more than 75 marks.\n");
    }

   
    free(students);
    students = NULL;

    return 0;
}