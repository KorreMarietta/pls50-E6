#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    char choice;
    float side, base, height, perimetros, upoteinousa, aktina;


    printf("-------------------------\n");

    printf(" 1 -> Tetragwno\n");
    printf(" 2 -> Parallhlogrammo\n");
    printf(" 3 -> Orthogwnio Trigwno\n");
    printf(" 4 -> Kuklos\n");

    printf("-------------------------\n");

    printf("Epelekse sxhma\n");
    scanf("%c%c", &choice);
    switch(choice)
{


    case '1':
    {
        printf("Eisagwgh pleuras\n");
        scanf(" %f", &side);
        perimetros = side * 4;
        printf("Perimetros tetragwnou = %f\n", perimetros);
    }
        break;


    case '2':
    {
        printf("Eisagwgh vasis kai ipsous \n");
        scanf(" %f %f", &base, &height);
        perimetros = 2 * base + 2 * height;
        printf("Perimetros parallhlogrammou = %f\n", perimetros);
    }
        break;

    case '3':
    {
        printf("Eisagwgh pleuras 1 kai 2\n");
        scanf(" %f %f", &base, &side);
        upoteinousa = base*base + side*side;
        perimetros = base + side + sqrt(upoteinousa);
        printf("Perimetros orthogwniou trigwnou = %f\n", perimetros);
    }
        break;


   case '4':
    {
        printf("Eisagwgh aktinas\n");
        scanf(" %f", &aktina);
        perimetros = 2* 3.142 * aktina;
        printf("Perimetros kuklou = %f\n", perimetros);
    }
        break;


    default:

{

        printf("Den epelekses sxhma\n");
        break;
}

    }
}
