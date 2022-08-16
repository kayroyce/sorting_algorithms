<<<<<<< HEAD
#ifndef _DECK_H
#define _DECK_H
=======
#ifndef __DECK__
#define __DECK__
>>>>>>> 0b0ae7ef24a7e5e4e867533f61612fe35136c86d

#include <stdlib.h>

/**
  * enum kind_e - deck's kind.
  * @SPADE: Spade kind.
  * @HEART: heart kind.
  * @CLUB: Club kind.
  * @DIAMOND: Diamond kind.
  */
typedef enum kind_e
{
<<<<<<< HEAD
    	SPADE = 0,
    	HEART,
    	CLUB,
    	DIAMOND
=======
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
>>>>>>> 0b0ae7ef24a7e5e4e867533f61612fe35136c86d
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */

typedef struct card_s
{
<<<<<<< HEAD
    	const char *value;
    	const kind_t kind;
=======
	const char *value;
	const kind_t kind;
>>>>>>> 0b0ae7ef24a7e5e4e867533f61612fe35136c86d
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */

typedef struct deck_node_s
{
<<<<<<< HEAD
    	const card_t *card;
    	struct deck_node_s *prev;
    	struct deck_node_s *next;
=======
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
>>>>>>> 0b0ae7ef24a7e5e4e867533f61612fe35136c86d
} deck_node_t;

void print_deck(const deck_node_t *deck);
void sort_deck(deck_node_t **deck);
int main(void);

<<<<<<< HEAD
#endif /* DECK_H */

=======
#endif /* __DECK__ */
>>>>>>> 0b0ae7ef24a7e5e4e867533f61612fe35136c86d
