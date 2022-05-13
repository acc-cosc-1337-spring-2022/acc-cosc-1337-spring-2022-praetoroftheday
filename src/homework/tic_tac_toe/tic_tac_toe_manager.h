//h
//include things that need to be used
#include "tic_tac_toe.h"

#include <iostream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER
class TicTacToeManager
{
public:
    void save_game(std::unique_ptr<TicTacToe&> b);
    friend std::ostream& operator<<(std::ostream & out,const TicTacToeManager& manager);
    void get_winner_total(int& o, int& w, int& t); 
private:
    std::vector<std::unique_ptr<TicTacToe>> games;   
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;

    void update_winner_count(std::string winner);

};
#endif