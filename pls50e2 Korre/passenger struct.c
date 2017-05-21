#include <stdio.h>
#define size 53 /*o xrhsths edw eisagei ws 53 stoixeia, auto llazei analoga me to posa stoixeia 8eloume na eisagoume, px size 5 gia 5 passengers etc.*/

typedef struct passenger
{
 char passengerName[40];
 unsigned short int passengerPhone[10];
 unsigned int passengerSeat;
};
int main()
{
    int i;
    struct passenger pass[size];
    struct passenger* pass_ptr;

    for(i=0;i<size;i++)
    {
        printf("Enter passenger name: "); /*zhtame apo to xrhsth na eiagei to onoma, to thlefwno kai thn thesh*/
        scanf("%s",pass[i].passengerName);

        printf("Enter passenger phone: ");
        scanf("%hu",pass[i].passengerPhone);  /*to pass[i] antikathista to passenger id, opote apothikeuetai kathe passenger apo tou 53 me to diko tou noumeraki*/

        printf("Enter seat: ");
        scanf("%d",pass[i].passengerSeat);
    }
    pass_ptr=pass;
    printf("\n Passenger DATA \n");
    for (i=0;i<size;i++)
    {
        printf("Passenger name: %s\n", pass_ptr->passengerName);
        printf("Passenger phone: %hu\n",pass_ptr->passengerPhone);
        printf("Passenger seat: %d\n",pass_ptr->passengerSeat);
        pass_ptr++;
    }
    return 0;
}
