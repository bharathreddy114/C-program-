#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;
    char grade;
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    percentage = (float)total / 5;
    
    
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("
Total Marks = %d
", total);
    printf("Percentage = %.2f%%
", percentage);
    printf("Grade = %c
", grade);
    
    
    if (grade == 'F') {
        printf("Result: Fail
");
    } else {
        printf("Result: Pass
");
    }
    
    return 0;
}
