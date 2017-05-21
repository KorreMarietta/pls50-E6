#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
char a;
float b,c,d;

printf ("dwse arithmo praji arithmo \n");
scanf ("%f %c %f", &b,&a,&c);

if (a=='+')
{d= b + c;
printf ("Apotelesma= %f\n", d);}
else if (a=='-')
{d= b - c;
printf ("Apotelesma= %f\n", d);}
else if (a=='*')
{d= b * c;
printf ("Apotelesma= %f\n", d);}
else
{
while (c== 0)
{printf ("edoses 0 gia diaireti, parakalw dwse ton diaireti diaforo tou 0\n");
scanf ("%f", &c);}
d= b / c;
printf ("Apotelesma= %f\n", d);}
}
