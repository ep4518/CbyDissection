#include <stdio.h>  /* for isspace() */
#include <ctype.h> /* for printf() etc. */
#include <stdlib.h> /* for rand() */
#include <time.h> /* for time() */


enum p_r_s {paper, rock, scissors, game, help, instructions, quit};
enum outcome {win, lose, tie, error};

typedef enum p_r_s p_r_s;
typedef enum outcome outcome;

outcome compare(p_r_s player, p_r_s machine);
void game_status(int win_cnt, int lose_cnt, int tie_cnt);
void help_for_the_player(void);
void prn_instructions(void);
p_r_s selection_by_player(void);
p_r_s selection_by_machine(void);


