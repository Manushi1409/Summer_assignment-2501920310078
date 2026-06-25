#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        int flag = 0;

        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%c", str[i]);
    }

    return 0;
}
