//include header file 
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

//make your own life easier
using std::cout; using std::cin; using std::string;

int main() 
{

	//organize this ish.
	TicTacToeManager manager;
	char choice;
	do
	{
		int size;
		//modify tictactoe game to a unique_ptr to tictactoe
		std::unique_ptr<TicTacToe>;
		//prompt the user to play tictactoe 3 or 4
		cout<<"Would you like to play TicTacToe 3 or 4?";
		cin>>size;
		//create an instance (make_unique) of TicTacToe 3 or 4
		if (size == 4)
		{
			std::make_unique<TicTacToe4> game;
		}
		else:
		{
			std::make_unique<TicTacToe3> game;
		}
		string first_player;

		cout<<"Enter first player (X or O): ";

		cin>>first_player;

		while (!(first_player == "X" || first_player == "O"))
		{
			cout<<"\nPlease enter either 'X' or 'O'\n";
			cin>>first_player;
		} 
		game.start_game(first_player); 

		while (game.game_over() == false) 
		{
			/* Told to remove this
			cout<< "\nEnter position [1-9]: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			*/
			cin>>game;
			cout<<game;

			game.game_over();

		}
		cout<<"\nCongratulations "<<game.get_winner()<<" you've won!";

		manager.save_game(*game);
		cout<< "\nGame Saved!\n";

		int o, x, t;
		manager.get_winner_total(x, o, t);

		cout<< "\nWould you like to play another game?\nTo do so, type 'Y': ";
		cin>>choice;
	}
	while (choice =='Y' || choice == 'y');

	//display all of the games played
	cout<<manager;

	return 0;
}