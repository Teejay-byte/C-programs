#include <stdio.h>

int main() {
    int score;
    printf("Enter the total score: ");
    scanf("%d", &score);

    if (score >= 70) {
        printf("Grade: A\n");
    } else if (score >= 60) {
        printf("Grade: B\n");
    } else if (score >= 50) {
        printf("Grade: C\n");
    } else if (score >= 40) {
        printf("Grade: D\n");
    }

    return 0;
}
