#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;

    do {
        printf("\n No.1 Register patient\n");
        printf("No.2 Check status\n");
        printf("No.3 Close\n");
        printf("Enter option: ");
        scanf("%d",&option);
        if (option == 1)
            printf("Registered successfully.\n");
    else if (option==2)
        printf("Waiting patient.\n");
    else if (option==3)
        printf("Program  ended\n");
    else printf("Choice not available.\n");

    } while (option!=3);
    return 0;
}
