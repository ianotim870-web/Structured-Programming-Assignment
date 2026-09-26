#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Man,woman,difference;
    printf("Enter Husband's Age: ");
    scanf("%d",&Man);
    printf("Enter Wife's Age: ");
    scanf("%d",&woman);

    if (Man>woman){
        difference = Man - woman;
        printf("Age gap = %d\n",difference);
    } else {
    printf("Husband is young and cant marry now");
    }

    return 0;
}
