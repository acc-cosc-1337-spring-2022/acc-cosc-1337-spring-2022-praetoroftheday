#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//include header file for tictactoe
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	//create an instance of TicTacToe game
	TicTacToe game;
	//call start_game function with argument X
	game.start_game("X");
	//verify that get_player returns X.
	REQUIRE("X" == game.get_player());
}

TEST_CASE("Test first player set to O")
{
	//create an instance of TicTacToe game
	TicTacToe game;
	//call start_game function with argument X
	game.start_game("O");
	//verify that get_player returns X.
	REQUIRE("O" == game.get_player());
}

//run tests to verify the funcitoning of the program
TEST_CASE("Test tic tac toe game over for a tie")
{
	//create an instance of tictactoe game
	TicTacToe game;
	//mark board 9 times and make sure the game stops at the 9th
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());
	//verify the winner is 'C'
	REQUIRE("C" == game.get_winner());
}

//test win by first column
TEST_CASE("Test win by first column")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 1, 4, 7
	//pick other positions for O
	game.mark_board(1);
	game.mark_board(3);

	game.mark_board(4);
	game.mark_board(2);

	game.mark_board(7);
	game.mark_board(5);


	//verify that game_over is true
	REQUIRE(true == game.game_over());
}


//test win by second column
TEST_CASE("Test win by second column")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 2, 5, 8
	game.mark_board(2);
	game.mark_board(3);

	game.mark_board(5);
	game.mark_board(1);

	game.mark_board(8);
	game.mark_board(9);

	//pick other positions for O
	
	//verify that game_over is true
	REQUIRE(true == game.game_over());
}

//test win by third column
TEST_CASE("Test win by third column")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 3, 6, 9
	game.mark_board(3);
	game.mark_board(1);

	game.mark_board(6);
	game.mark_board(2);

	game.mark_board(9);
	game.mark_board(5);

	//pick other positions for O

	//verify that game_over is true
	REQUIRE(true == game.game_over());
}

//test win by first row
TEST_CASE("Test win by first row")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 1, 2, 3
	game.mark_board(1);
	game.mark_board(5);

	game.mark_board(2);
	game.mark_board(8);

	game.mark_board(3);
	game.mark_board(8);

	//pick other positions for O

	//verify that game_over is true
	REQUIRE(true == game.game_over());
}

//test win by second row
TEST_CASE("Test win by second row")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 4, 5, 6
	game.mark_board(4);
	game.mark_board(3);

	game.mark_board(5);
	game.mark_board(2);

	game.mark_board(6);
	game.mark_board(8);

	//pick other positions for O

	//verify that game_over is true
	REQUIRE(true == game.game_over());
}

//test win by third row
TEST_CASE("Test win by third row")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 7, 8, 9
	game.mark_board(7);
	game.mark_board(3);

	game.mark_board(8);
	game.mark_board(2);

	game.mark_board(9);
	game.mark_board(5);
	
	//pick other positions for O

	//verify that game_over is true
	REQUIRE(true == game.game_over());
}

//test win diagonally from top left
TEST_CASE("Test win by diagonal top left")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 1, 5, 9
	game.mark_board(1);
	game.mark_board(3);

	game.mark_board(5);
	game.mark_board(2);

	game.mark_board(9);
	game.mark_board(6);

	//pick other positions for O

	//verify that game_over is true
	REQUIRE(true == game.game_over());
}

//test win diagonally from bottom left
TEST_CASE("Test win by diagonal bottom left")
{
	//create an instance of TicTacToe
	TicTacToe game;

	//call start_game() function with argument X
	game.start_game("X");

	//set positions for first player X to 7,5, 3
	game.mark_board(7);
	game.mark_board(1);

	game.mark_board(5);
	game.mark_board(2);

	game.mark_board(3);
	game.mark_board(8);

	//pick other positions for O

	//verify that game_over is true
	REQUIRE(true == game.game_over());
}