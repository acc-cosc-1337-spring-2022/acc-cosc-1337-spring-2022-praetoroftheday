//cpp

//include header file
#include "tic_tac_toe.h"

//include things that will let me do things easier
using std::string; using std::cout;


//define constructor
//create a constructor with an int parameter named size. 
//use an initializer list to initialize the vector to 9 or 16 elements 
//HINT: multiply 3 or 4 by itself.
TicTacToe::TicTacToe(int size)
{
    int s = size*size;
    std::vector<std::string> pegs{s, " "};
}

//define the functions

//define game_over()
bool TicTacToe::game_over()
{
    //update class function to determine a win by checking for different kinds of wins
    //if winner, call set winner function and return true
    //check column win
    if (check_column_win() == true) 
    {
        set_winner();
        return true; 
    }
    //row win
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }

    //diagonal win
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }

    //check board full equal true means it is a tie. 
    //if there is no winner in this case, set winner variable to C and return true
    else if (check_board_full())
    {
        cout<<"Oops! It's a tie!";
        winner = "C";
        return true;
    }
    else 
    {
        //if no winner and board is not full, return false.
        return false;
    }
   
}

//define start_game 
void TicTacToe::start_game(string first_player)
{
    player = first_player;
    cout<<"\nFirst player: Set\n";
    clear_board();
    cout<<"\nClear board function successfully called\n";
}

//define mark_board 
void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

//define get_player
string TicTacToe::get_player() const
{
    string next_player = player;
    return next_player;
}

/* 
REMOVED
define display_board
void TicTacToe::display_board()const
{
    for (int i=0; i < 9; i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}
*/


//define get_winner function
string TicTacToe::get_winner()
{
    return winner;
}

//overload istream operator (returns istream& not void)
std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    cout<<"Enter Position [1-9]: ";
    in>>position;
    game.mark_board(position);
    return in;

}
//overload ostream operator (returns ostream& not void)
std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    if (size == 4)
    {
        for (int i=0; i < 16; i+=4)
        {
            out<<game.pegs[i]<<"|"<< game.pegs[i+1]<<"|"<< game.pegs[i+2]<<"|"<<game.pegs[i+3]<<"\n";
        }
        return out;
    }
    else:
    {
        for (int i=0; i < 9; i+=3)
        {
            out<<game.pegs[i]<<"|"<< game.pegs[i+1]<<"|"<< game.pegs[i+2]<<"\n";
        }
        return out;
    }

}


//define check_column_win
bool TicTacToe::check_column_win()
{    
    return false;
}

//define check_row_win
bool TicTacToe::check_row_win()
{    
    return false;
}

//define check_diagonal_win
bool TicTacToe::check_diagonal_win()
{    
    return false;
}

//define void set_winner
void TicTacToe::set_winner()
{
    //if player is 'X', set winner to O
    if (player == "X")
    {
        winner = "O";
    }
    //otherwise set winner to "X"
    else
    {
        winner = "X";
    }
}

//define set_next_player
void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}

//define check_board_full
bool TicTacToe::check_board_full()
{
    for (std::string peg: pegs)
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
    cout<<"\nClearing Board...\n";
    pegs.clear();
    for (int i = 0; i <size; i++)
    {
        pegs.push_back(" ");
    }
    cout<<"\nBoard: Cleared\n";
}

