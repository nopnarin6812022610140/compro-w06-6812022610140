#include <stdio.h>

int main()
{
    int level;
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    if (level <= 0) {
        printf("The level below 1 is not allowed\n");
    }
    else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    }
    else {
        switch (level)
        {
        case 1: printf("Beginner\n"); break;
        case 2: printf("Intermediate\n"); break;
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        }
    }
    return 0;
}