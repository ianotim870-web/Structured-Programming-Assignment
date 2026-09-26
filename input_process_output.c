#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance,Airticket;
    char destination[34];
    printf("Enter destination: ");
    scanf("%s",&destination);
    printf("Enter Distance(km): ");
    scanf("%d", &distance);

    Airticket = distance * 2000;
    printf("Total fare = %d", Airticket);
    return 0;
}
