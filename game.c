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

p_r_s selection_by_player(void) {
    int c;
    p_r_s player;

    printf("Input p, r, or s:   ");
    while (isspace(c = getchar()))  /* skip white space */
        ;
    switch (c) {
    case 'p':
        player = paper;
        break;
    case 'r':
        player = rock;
        break;
    case 's':
        player = scissors;
        break;
    case 'g':
        player = game;
        break;
    case 'i':
        player = instructions;
        break;
    case 'q':
        player = quit;
        break;
    default:
        player = help;
        break;
    }
    return player;
}

p_r_s selection_by_machine(void) {
    return ((p_r_s) (rand() % 3));
}

outcome compare(p_r_s player, p_r_s machine) {
    outcome result;

    if (player == machine)
        return tie;
    switch (player) {
    case paper:
        result = (machine == rock) ? win : lose;
        break;
    case rock:
        result = (machine == scissors) ? win : lose;
        break;
    case scissors:
        result = (machine == paper) ? win : lose;
        break;
    }
    return result;
}

void game_status(int win_cnt, int lose_cnt, int tie_cnt) {
    printf("\n%s\n%s%4d\n%s%4d\n%s%4d\n%s%4d\n\n",
        "GAME STATUS:",
        "   Win:    ", win_cnt,
        "   Lose:   ", lose_cnt,
        "   Tie:    ", tie_cnt,
        "   Total:  ", win_cnt + lose_cnt + tie_cnt);
}

void help_for_the_player (void) {
    printf("\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n",
        "The following characters can be used for input:",
        "   p   for paper",
        "   r   for rock",
        "   s   for scissors",
        "   g   to find out the game status",
        "   h   to print this list",
        "   i   to reprint the instructions for this game",
        "   q   to quit this game");
}