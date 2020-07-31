#ifdef STDC_ALLOC_LIB
#define STDC_WANT_LIB_EXT2 1
#else
#define _POSIX_C_SOURCE 200809L
#endif

#include "itemTeam.h"

ItemTeam newItem_team(char* name){
	ItemTeam x = malloc(sizeof(Team));
	x->name = strdup(name);
   x->numGamesWon = 0;
	return x;
}

void deleteItem_team(ItemTeam i){
	free(i->name);
   free(i);
}

void showItem_team(ItemTeam i){
   printf("%s %d\n", i->name, i->numGamesWon);
}
