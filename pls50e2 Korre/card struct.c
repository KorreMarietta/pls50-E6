#include <stdio.h>
#include <stdlib.h>


 /*sto sugkekrimeno programma dhmiourgoume ena deck apo 81 kartes me olous tous pithanous sundiasmous twn 4 timwn, xwris na toys orisoume data kai xwris na epilegoume 12 tuxaious*/
typedef struct _card {
    int suit;
    int value;
    char shape;
    char state;
} card;

typedef struct _deck {
    int num_cards;
    card **cards;
} deck;

card *make_card(int suit, int value, char shape, char state)
{
    card *newCard = malloc(sizeof(card));
    newCard-> suit = suit;
    newCard->value = value;
    newCard->shape  = shape;
    newCard->state = state;

    return newCard;
}

deck *make_standard_deck( void )
{
    deck *newDeck = malloc( sizeof(deck) );

    newDeck->num_cards = 81;                            /*deck 81 kartwn me olous tous pithanous sundiasmous*/
    newDeck->cards = malloc( 81 * sizeof(card *) );

    int index = 0;
    for ( int suit = 0;  suit < 3; suit++ )
        for ( int value = 1; value <= 3; value++ )
            for ( char shape = 1; shape <= 3; shape++ )
                for ( char state = 1; state <= 3; state++ )
            newDeck->cards[index++] = make_card( suit, value, state, shape );

    return newDeck;
}

int main( void )
{
    int i;

    deck *stdDeck = make_standard_deck();

    for ( i = 0; i < 81; i++ )
        printf( "%d %d %d %d\n", stdDeck->cards[i]->suit, stdDeck->cards[i]->value, stdDeck->cards[i]->state, stdDeck->cards[i]->shape );

    /* free the deck when we're done with it */
    for ( i = 0; i < stdDeck->num_cards; i++ )
        free( stdDeck->cards[i] );
    free( stdDeck->cards );
    free( stdDeck );
}
