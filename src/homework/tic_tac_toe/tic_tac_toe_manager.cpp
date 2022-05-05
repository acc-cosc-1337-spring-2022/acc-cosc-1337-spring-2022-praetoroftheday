//cpp

#include "tic_tac_toe_manager.h"

using std::string; using std::cout;

//public functions
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}


void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;

    cout<<"\nWinners so far...\n";
    cout<<"\nX wins: "<<x<<"\nO wins: "<<o<<"\nTies: "<<t;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto game: manager.games)
    {
        out<<game<<"\n";
    }
    out<<"X wins: "<<manager.x_wins<<"\n";
    out<<"O wins: "<<manager.o_wins<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

    return out;
}

//beginning of private function
void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_wins += 1;
    }
    else if (winner == "O")
    {
        o_wins += 1;
    }
    else  
    {
        ties += 1;
    }
};