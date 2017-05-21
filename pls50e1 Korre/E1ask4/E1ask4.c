#include <stdio.h>


int main( void)
{
FILE *bustext;
int number;
char pinakas[54];

      bustext=fopen("C:\\E1ask4\\bus.txt","r");

     if(bustext== NULL)
        {
         printf("Problem");
         exit(1);
     }


   fscanf(bustext, "%s  %d", pinakas, &number);
   printf("Periexomena pinaka\n");
   printf("%s\n %d\n", pinakas, number);
   fclose(bustext);

   }

