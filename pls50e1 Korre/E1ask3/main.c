#include <stdio.h>

int main( void )
{
	int decimal = 0;

	printf("Dose enan akeraio thetiko arithmo:\n ");
	scanf("%d", &decimal);

	printf("(Akeraios) %d = (Antistrofh Duadikh Anaparastash) ", decimal );
	while ( decimal != 0 )
	{
		printf("%d", decimal % 2 );
		decimal /= 2;
	}

	putchar('\n');

	return 0;
}
