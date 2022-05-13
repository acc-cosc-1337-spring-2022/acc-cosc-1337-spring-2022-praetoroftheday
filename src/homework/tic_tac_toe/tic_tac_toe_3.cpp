#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
//define check_column_win
bool TicTacToe3::check_column_win()
//if pegs (0, 3, 6), (1, 4, 7), or (2, 5, 8)
//are all marked by either X or O, set column_win to true.
{    
    //check for (0, 3, 6)
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }
    //check for (1, 4, 7)
    if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }
    if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }
    //check for (2, 5, 8)
    if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }
    //if none are triggered, return false
    else
    {
        return false;
    }
}

//define check_row_win
bool TicTacToe3::check_row_win()
//if pegs (0, 1, 2), (3, 4, 5), or (6, 7, 8)
//are all marked by either X or O, set check_row_win to true.
{    
    //check for (0, 1, 2)
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }
    //check for (3, 4, 5)
    if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
    if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
    //check for (6, 7, 8)
    if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    //if none are triggered, return false
    else
    {
        return false;
    }
}

//define check_diagonal_win
bool TicTacToe3::check_diagonal_win()
//if pegs (0, 4, 8) or (6, 4, 2)
//are all marked by either X or O, set check_diagonal_win to true.
{    
    //check for (0, 4, 8)
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    //check for (6, 4, 2)
    if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        return true;
    }
    if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    //if none are triggered, return false
    else
    {
        return false;
    }
}