
#include <stdio.h>  /* logw printf(), fscanf(), fopen(), fclose() */
#include <time.h>   /*gia to random*/
#include <conio.h>  /*gia input output*/
#include <stdlib.h> /* logw exit() */

/*eisagoume tous paiktes apo arxeio sth mnhmh



int main()
{
   FILE* f_in, *f_out;                                                  /* metablites-deiktes se arxeio
   char playername[18];                                                 /* onoma paikth, 17 grammata kai to '\0'
   int score;                                                           /* score tou paikth *
   char id;                                                             /*anagnwristiko tou paikth *
   int i, choice, count;                                                /* boithitikes metablites *

   f_in = fopen("players.txt", "r");                                    /* Anoigei to arxeio eisodou*
   if(f_in == NULL)                                                     /* se periptwsi problimatos kata to anoigma *
   {
      printf("To arxeio players.txt de mporese na anagnwstei\n");
      exit(1);                                                          /* eksodos apo to programma *
   }
   fscanf(f_in,"%s %s %d", playername, id, &score);
   fclose(f_in);                                                        /* kleisimo arxeiou eisodou *
   printf("%s %s %d\n", playername, id, score);                         /* ektypwsi onomatos, anagnwristikou kai score *
   if (score > 255) {
     printf("megisto score 255\n");                                     /*score apo 0 ws 255 *
     exit(1);
   }





   **se periptwsh pou den exoume eisodo apo txt file alla einai se thesi mnhmhs tote xrhsimopoioume to stucture





*/








/*ftiaxnontas ton pinaka gia tis kartes, orizontas tis metavlhtes, ola char afou anaferomaste kathara se xarakthres*/



void shuffle( int wdeck[][4]);                                                  /*uparxoun 3 grammes kai 4 stiles, opws dhlwnontai kai pio katw*/
void deal( const int wdeck[][4], const char *wsuits[], const char *wshape[], const char *wvalues[], const char *wstate[]);                          /*dhlwnoume theseis*/
void pair( int a[]);

/*ton pinaka ton dhlwnoume kai me tropo deck[x][y]={{"r","g","b"},{"c","t","r"},{"a","b","c"},{"b","h","e"}} kanontas define to x ws 3 kai to y ws 4 (#define x 3) etc.;*/

int main()
{

const char *suits[3]  = {"R", "G", "B"};                  /* treis kuries kathgories kartwn analoga me to xrwma */
const char *shape[3]  = {"C", "T", "R"};                  /* c: kuklos, t: trigwno, r: romvos */
const char *values[3] = {"a", "b", "c"};                  /* mporoume na exoume ena, duo h' tria sxhmata */
const char *state[3]  = {"B", "H", "E"};                  /* b: plhres, h: grammoskiasmeno, e: perigramma */



int deck[3][4] ={0};

 srand( time(NULL));

    shuffle(deck);
    deal(deck, suits, shape, values, state);

exit(1);

}






void shuffle(int wdeck[3][4])                                                                  /* to programma kanei shuffle to deck mas */
{
    int row;
    int column;
    int card;

    for(card = 1; card <= 81; card++) {            /*81 pithanes kartes*/
        do {
            row = rand() % 4+1;
            column = rand() % 3+1;                 /*h rand diairei me ton arithmo pou grafoume opote vazoume to +1 gia na uparxei kai o arithmos pou 8eloume mesa*/
        }while(wdeck [row] [column] !=0);

        wdeck [row] [column] = card;
    }
}


void deal(const int wdeck[][4], const char *wsuits[], const char *wshape[], const char *wvalues[], const char *wstate[])

{
    int card;
    int row;
    int column;


    for ( card = 1; card <= 81; card++ ) {

        for ( row = 0; row <= 4; row++ ){

            for ( column = 0; column <=3; column++ ){        /*4 stiles opote n-1 */

            {

                    printf("%s %s %s %s %s\n", wvalues[row], wsuits[column], wshape[column], wstate[column], card % 81 == 0 );


                }

        }
    }
    _getch();
}
}














