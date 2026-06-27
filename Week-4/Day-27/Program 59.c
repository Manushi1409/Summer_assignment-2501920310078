#include <stdio.h>

struct Marksheet {
    int roll;
    char name[50];
    int m1, m2, m3;
    float total, percentage;
};

int main() {
    struct Marksheet m;
    
    printf("Enter Roll No: ");
    scanf("%d", &m.roll);

    printf("Enter Name: ");
    scanf("%s", m.name);

    printf("Enter 3 subject marks: ");
    scanf("%d %d %d", &m.m1, &m.m2, &m.m3);

    m.total = m.m1 + m.m2 + m.m3;
    m.percentage = m.total / 3;

    printf("\n--- Marksheet ---\n");
    printf("Roll No: %d\n", m.roll);
    printf("Name: %s\n", m.name);
    printf("Total: %.2f\n", m.total);
    printf("Percentage: %.2f%%\n", m.percentage);

    return 0;
}
