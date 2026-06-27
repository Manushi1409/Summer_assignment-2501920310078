#include <stdio.h>

struct Salary {
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main() {
    struct Salary s[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);

        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Basic Salary: ");
        scanf("%f", &s[i].basic);

        s[i].hra = 0.2 * s[i].basic;
        s[i].da  = 0.1 * s[i].basic;
        s[i].total = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\n--- Salary Details ---\n");

    for(i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Total Salary: %.2f\n",
               s[i].id, s[i].name, s[i].total);
    }

    return 0;
}
