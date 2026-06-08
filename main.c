#include <stdio.h>

int main() {
    int maths, science, english;
    int total, highest;
    float average;
    char grade;

    printf("=================================\n");
    printf("     STUDENT RESULT ANALYZER\n");
    printf("=================================\n");

    printf("Enter Mathematics marks: ");
    scanf("%d", &maths);

    printf("Enter Science marks: ");
    scanf("%d", &science);

    printf("Enter English marks: ");
    scanf("%d", &english);

    total = maths + science + english;
    average = total / 3.0;

    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    highest = maths;

    if (science > highest)
        highest = science;

    if (english > highest)
        highest = english;

    printf("\n=================================\n");
    printf("          RESULT SHEET\n");
    printf("=================================\n");
    printf("Mathematics : %d\n", maths);
    printf("Science     : %d\n", science);
    printf("English     : %d\n", english);
    printf("---------------------------------\n");
    printf("Total       : %d\n", total);
    printf("Average     : %.2f\n", average);
    printf("Grade       : %c\n", grade);
    printf("Highest Mark: %d\n", highest);

    if (maths >= 40 && science >= 40 && english >= 40)
        printf("Result      : PASS\n");
    else
        printf("Result      : FAIL\n");

    if (average >= 85 &&
        maths >= 80 &&
        science >= 80 &&
        english >= 80)
    {
        printf("Award       : DISTINCTION\n");
    }

    printf("=================================\n");

    return 0;
}
