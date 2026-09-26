#include <stdio.h>
#include <stdlib.h>

int main()
{
   int temperature;

   for (int period=1; period <=5; period++ ) {
    printf("Enter temperature for this period= ", period);
    scanf("%d", &temperature);
   if (temperature>35){
    printf("Temperature is high.\n");
   } else {
   printf("Temperature is not high.\n");
   }
   }
    return 0;
}
