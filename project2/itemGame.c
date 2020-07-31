#ifdef STDC_ALLOC_LIB
#define STDC_WANT_LIB_EXT2 1
#else
#define _POSIX_C_SOURCE 200809L
#endif

#include "itemGame.h"

ItemGame newItem_game(char* name, char* team1, char* team2, int score1,
	               int score2){
	ItemGame x = malloc(sizeof(Game));
	x->name = strdup(name);
	x->team1 = strdup(team1);
	x->team2 = strdup(team2);
	x->score1 = score1;
	x->score2 = score2;
	return x;
}

void deleteItem_game(ItemGame i){
	free(i->name);
	free(i->team1);
	free(i->team2);
   free(i);
}

void showItem_game(ItemGame i){
   printf("%s %s %s %d %d\n", i->name, i->team1, i->team2, i->score1,
	                           i->score2);
}
