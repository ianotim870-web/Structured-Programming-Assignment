#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, totalAge=0;

    for (int num=1; num<=4; num++){
        printf("Enter Age of the old person=",num);
        scanf("%d",&age);
        totalAge = totalAge + age;
    }
    printf("The total age of the four  people = %d\n",totalAge);
    return 0;
}
