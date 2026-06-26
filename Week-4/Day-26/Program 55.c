#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("=== Quiz App ===\n");

    printf("Q1. What is 2 + 2?\n");
    printf("1. 3\n2. 4\n3. 5\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if (ans == 2) score++;

    printf("\nQ2. What is capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if (ans == 1) score++;

    printf("\nQ3. Which is programming language?\n");
    printf("1. HTML\n2. CSS\n3. C\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if (ans == 3) score++;

    printf("\nYour Score: %d/3\n", score);

    return 0;
}
