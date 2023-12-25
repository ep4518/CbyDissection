#include "p_r_s.h"

void prn_instructions(void);  // Function declaration

int main() {
    int win_cnt = 0, lose_cnt = 0, tie_cnt = 0;
    outcome result;
    p_r_s player, machine;
    srand(time(NULL));
    prn_instructions();
    while ((player = selection_by_player()) != quit) {
        switch (player) {
            case paper: 
            case rock: 
            case scissors: 
                machine = selection_by_machine();
                result = compare(player, machine);
                if (result == win) {
                    printf("You win!\n");
                    win_cnt++;
                }
                else if (result == lose) {
                    printf("You lose!\n");
                    lose_cnt++;
                }
                else if (result == tie) {
                    printf("Tie!\n");
                    tie_cnt++;
                } 
                break;
            case game:
                game_status(win_cnt, lose_cnt, tie_cnt);
                break;
            case instructions:
                prn_instructions();
                break;
            case help:
                help_for_the_player();
                break;
        }
        game_status(win_cnt, lose_cnt, tie_cnt);
        if (win_cnt > lose_cnt) {
            printf("You are winning!\n");
        }
    } 

    return 0;
}

void prn_instructions(void) {
    printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n",
        "PAPER, ROCK, SCISSORS:\n",
        "   In this game p is for \"paper,\" r is for \"rock,\" and s\n",
        "   is for \"scissors.\" Both the player and the machine will \n",
        "   choose one of p, r or s. If the two choices are the same, \n",
        "   then the game is a tie. Otherwise:\n",
        "       \"paper covers the rock\"       (a win for paper),\n",
        "       \"rock breaks the scissors\"    (a win for rock),\n",
        "       \"scissors cut the paper\"      (a win for scissors). \n\n",
        "   There are other allowable inputs:\n",
        "       g   for game status     the number of wins so far),\n",
        "       h   for help,\n",
        "       i   for instructions    (reprint these instructions),\n",
        "       q   for quit            (to quit the game)\n\n", 
        "   This game is played repeatedly until q is entered.\n",
        "   Good luck!\n");
}
