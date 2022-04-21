//cpp

//include header file
#include "tic_tac_toe.h"

//include things that will let me do things easier
using std::string; using std::cout;

//define the functions

//define game_over()
bool TicTacToe::game_over()
{
    return check_board_full();
}

//define start_game 
void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

//define mark_board 
void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

//define display_board
void TicTacToe::display_board()const
{
    for (int i=0; i < 9; i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

//define set_next_player
void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "0";
    }
    else 
    {
        player = "X";
    }
}

//define check_board_full
bool TicTacToe::check_board_full()
{
    for (auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }
    return true;
}

//define clear_board
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

