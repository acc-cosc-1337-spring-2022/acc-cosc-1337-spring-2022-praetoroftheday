//include header file 
#include "tic_tac_toe.h"

//make your own life easier
using std::cout; using std::cin; using std::string;

int main() 
{
	//organize this ish.
	TicTacToe game;
	string first_player;
	char choice;

	do
	{
		cout<<"Enter first player (X or O): ";
		cin>>first_player;
		while (!(first_player == "X" || first_player == "O"))
		{
			cout<<"\nPlease enter either 'X' or 'O' \n";
			cin>>first_player;
		} 

		game.start_game(first_player);

		//declare position variable
		int position;
		while (game.game_over() == false)
		{
			cout<< "\nEnter position [1-9]: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<< "\nWould you like to play another game?\nTo do so, type 'Y': ";
		cin>>choice;
	}
	while (choice =='Y' || choice == 'y');

	return 0;
}