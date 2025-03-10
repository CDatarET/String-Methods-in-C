#include <stdio.h>
#include <string.h>

void run();

int main() {
    run();
    return 0;
}

void run() {
    char yn = 'y';
    
    while (yn == 'y') {
        printf("Enter a string (max 19 characters):\n");
        char s[20];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = 0;

        printf("What string operation do you want to perform? \n");
        printf("1 for length, 2 for compare, 3 for concatenate, 4 for copy \n");
        int op;
        scanf("%d", &op);
        getchar();

        switch (op) {
            case 1:
                printf("Length is %zu \n", strlen(s));
                break;

            case 2: {
                printf("Enter another string (max 19 characters):\n");
                char comp[20];
                fgets(comp, sizeof(comp), stdin);
                comp[strcspn(comp, "\n")] = 0;
                int a = strcmp(s, comp);

                if (a > 0) {
                    printf("%s is greater than %s\n", s, comp);
                } else if (a < 0) {
                    printf("%s is less than %s\n", s, comp);
                } else {
                    printf("%s is equal to %s\n", s, comp);
                }
                break;
            }

            case 3: {
                printf("Enter another string to concatenate (max 19 characters):\n");
                char concat[20];
                fgets(concat, sizeof(concat), stdin);
                concat[strcspn(concat, "\n")] = 0;
                strncat(s, concat, sizeof(s) - strlen(s) - 1);
                printf("Concatenated string: %s\n", s);
                break;
            }

            case 4: {
                char copy[20];
                strncpy(copy, s, sizeof(copy) - 1);
                copy[sizeof(copy) - 1] = '\0';
                printf("Copied string: %s\n", copy);
                break;
            }

            default:
                printf("Invalid operation.\n");
                break;
        }

        printf("Perform another operation? (y/n)\n");
        scanf(" %c", &yn);
        getchar();
    }

    printf("Ended Program \n");
}
