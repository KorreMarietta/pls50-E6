#include <stdio.h>              /* logw printf(), fscanf(), fopen(), fclose() */
#include <stdlib.h>             /* logw exit() */



int main()
{
    struct passenger
{
 char passengerName[40];
 unsigned short int passengerPhone[10];
 unsigned int passengerSeat;
};
   FILE* f_in, *f_out;         /* metablites-deiktes se arxeio */
   int bus[53];                /* lewforeio me to polu 53 theseis */
   char license[8];            /* pinakida kykloforias, 7 grammata-arithmoi kai to '\0' */
   int seats;                  /* plithos thesewn */
   char passengerName[40];
   unsigned int passengerSeat;               /*krathmenh thesh (%u)*/
   unsigned short int passengerPhone[10];    /*thlefwno epivath (%hu)*/

   int i, choice, count;       /* boithitikes metablites */

   f_in = fopen("bus.txt", "r"); /* Anoigei to arxeio eisodou*/
   if(f_in == NULL) /* se periptwsi problimatos kata to anoigma */
   {
      printf("To arxeio bus.txt de mporese na anagnwstei\n");
      exit(1);      /* eksodos apo to programma */
   }
   fscanf(f_in,"%s %d %s %u %hu", license, &seats, passengerName, &passengerSeat, passengerPhone); /*edw kollhsa sto pws na kanw thn epanalhyh gia na parei kai tis alles 2 krathmenes theseis*/
   fclose(f_in);                                                                                   /* kleisimo arxeiou eisodou */
   printf("%s %d \n %s %u %hu \n", license, seats, passengerName,  passengerSeat, passengerPhone); /* ektypwsi pinakidas, plithous thesewn, epwnumou epivath, thesh kai thlefwno */


   for (i=0;i<seats;i++)
     bus[i]=0;                                    /* arxikopoiisi thesewn lewforeiou */

   choice = 1;                                    /* arxiki timi gia eisodo sto loop */
   while (choice != 0) {                          /* mexri na epilegei termatismos */
      printf("1. emfanish synolikoy plhthous kenwn thesewn kai twn arithmwn  tous\n");
      printf("2. krathsh theshs me sygkekrimeno arithmo\n");
      printf("3. anazhthsh hdh krathmenhs theshs me vash proswpika stoixeia\n");
      printf("4. akyrwsh krathshs theshs me sygkekrimeno arithmo\n");
      printf("5. emfanish listas krathmenwn thesewn taksinomhmenhs kata arithmo theshs\n");
      printf("0. termatismos\n");
      scanf("%d", &choice);
      printf("Epilogi: %d\n",choice);

      switch(choice)
      {

        case 1:
           count = 0;   /* arxikopoiisi metriti */
           for (i=0;i<seats;i++)
              if (bus[i] == 0) count++; /* an thesi eleutheri, auksise to metriti */
           /* tha mporousame anti na metrame kathe fora tis kenes theseis,
           na kratame se metabliti to plithos twn kenwn thesewn kai na tin
           enimerwnoume gia kathe kratisi / apodesmeusi */
           printf("Plithos kenwn thesewn = %d apo %d\n Arithmoi thesewn:\n",count,seats);
           for (i=0;i<seats;i++)
              if (bus[i] == 0)                /* an thesi eleutheri */
                printf("%d ",i+1);            /* typwse ton arithmo tis */
           printf("\n");

           break;


        case 2:
           printf("dwse arithmo thesis\n");
           scanf(" %d", &i);

           if (i<1 || i>seats) {                                    /* elegxos oti arithmos thesis entos oriwn */
              printf("arithmos thesis ektos oriwn\n");
           }
           else if (bus[i-1] == 0) {                                /* an einai eleutheri */
                  bus[i-1] =1;                                      /* kratise tin */
                  printf("thesi kratithike\n");
                  printf("\n");
                  printf("Epwnumo epivath\n");
          scanf("%s",passengerName);
          printf("H thesh sas %s einai h  %d", &passengerName,i);
          printf("\n");
               }

           else if (bus[i-1] != 0)                                  /* an thesi kratimeni */
                  printf("thesi kateilimmeni\n");

           break;


        case 3:
         printf("Stoixeia epivath\n");                               /*o epivaths dinei to epwnumo kai to thlefwno tou*/
         scanf ("%s %hu", &passengerName, &passengerPhone);
         if (*passengerName==NULL)                                   /*an uparxei sth vash dedomenwn tha vgei kai to katallhlo munhma*/
            printf("O sugkekrimenos epivaths den uparxei sth vash dedomenwn\n");
        else if (*passengerName!=0)
            printf ("O epivaths exei krathsei thn thesh %d",i);
           break;


        case 4:
           printf("dwse arithmo thesis\n");
           scanf("%d", &i);
           if (i<1 || i>seats)   /* elegxos oti arithmos thesis entos oriwn */
              printf("arithmos thesis ektos oriwn\n");

           else if (bus[i-1] != 0) { /* an thesi kratimeni */
                  bus[i-1] = 0;    /* apodesmeuse tin */
                  printf("thesi apodesmeutike\n");
                }
                else
                  printf("thesi idi eleutheri\n");

           break;


        case 5:
           printf("kratimenes theseis\n");


          choice = 1;                                    /* arxiki timi gia eisodo sto loop */
          while (choice != 0) {                          /* mexri na epilegei termatismos */
            printf("1.kata thesi\n");
            printf("2.kata onoma\n");
            scanf("%d", &choice);
            printf("Epilogi: %d\n",choice);

      switch(choice)
      {
           case 1:
               printf("kata thesh\n");

           for (i=0;i<seats;i++)
              if (bus[i] != 0)                 /* an thesi kratimeni */
           printf("%d ",i+1);                  /* tupwse tin */
           printf(" \n");
           break;

           case 2:
            printf("dwse onoma\n");
            scanf(" &s",&passengerName);
            printf("taksinomhsh:\n");        /*edw kaloume thn struct passenger sthn opoia exoume apothikeusei olous tous epivates kai ta stoixeia tous*/
            exit(1);
           break;

           default:
           printf("epelekse 1 h' 2\n");
      }}


         case 0:  /* min kaneis tipote */

           f_out = fopen("layout.txt", "w"); /* Anoigei to arxeio ejodou*/
           if(f_out == NULL) /* se periptwsi problimatos kata to anoigma */
           {
              printf("To arxeio layout.txt den mporese na anoixtei\n");
              exit(1);
           break;


        default:
           printf("akatallili epilogi\n");

           }
      }
    }



           }




