#include <stdio.h>
#include <stdlib.h>

int main()
{
    int percentage,year=2;

    while (year<=7){
        printf("Enter HIV percentage for this year= ",year);
        scanf("%d",&percentage);
        printf("HIV percentage entered= %d\n",percentage);
        year++;
    }
    return 0;
}
