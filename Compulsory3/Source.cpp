#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <fstream>



std::string	p1Name{};
std::string p1Token = "X";
std::string p2Name{};
std::string p2Token = "O";
int drop{};
int currentPlayer = 1;

int player1Score{};
int player2Score{};
int aiScore{};
std::fstream saveFile("C:\\Users\\chris\\source\\repos\\Compulsory3f\\score.txt"); // Adds the save file as a global variable.

bool aiON = false;

void drawBoard();
void startScreen();
void player1Turn();
void player2Turn();
void aiTurn();
void save();
bool checkWin();
bool checkDraw();

std::vector<std::vector<std::string>> board = {
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"} };

void startScreen() // Displays the start screen which asks for player names and if a single player wants to play with AI.
{
	char ans{};

	std::cout << "Welcome to connect 4 !!\n\n";
	system("pause");
	system("cls");

	std::cout << "Enter player 1 name: ";
	getline(std::cin, p1Name);

	std::cout << "Play vs AI? y/n: ";
	std::cin >> ans;
	std::cin.clear(); 
	std::cin.ignore(32767, '\n');

	if (ans == 'y')
	{
		aiON = true;
	}
	else if (ans == 'n')
	{
		std::cout << "Enter player 2 name: ";
		getline(std::cin, p2Name);

		
	}
	system("cls");
	}

	

void drawBoard() // Draws the game  board and adds a row on top for visual clarity when picking where to drop.
{
	std::cout << " 1  2  3  4  5  6  7" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << "|";
		for (int j = 0; j < 7; j++)
		{
			std::cout << board[i][j];
			std::cout << "--";
		}
		std::cout << "|";
		std::cout << std::endl;

	}
}

void player1Turn()
{

	 currentPlayer = 1; 

	std::cout << p1Name << " please enter a number from 1 to 7: ";
	std::cin >> drop; // Drops a token in the row  the player selected.

	switch (drop)
	{
	case 1:
		for (int i = 5; i >= 0; i--) // Looks for stars from the bottom adds the player's token if a star is detected.
		{
			if (board[i][0] == "*")
			{
				board[i][0] = p1Token;
				break;
			}
			else if (board[0][0] == "X" || board[0][0] == "O") // Checks if a column is full.
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 2:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][1] == "*")
			{
				board[i][1] = p1Token;
				break;
			}
			else if (board[0][1] == "X" || board[0][1] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 3:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][2] == "*")
			{
				board[i][2] = p1Token;
				break;
			}
			else if (board[0][2] == "X" || board[0][2] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 4:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][3] == "*")
			{
				board[i][3] = p1Token;
				break;
			}
			else if (board[0][3] == "X" || board[0][3] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 5:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][4] == "*")
			{
				board[i][4] = p1Token;
				break;
			}
			else if (board[1][4] == "X" || board[1][4] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 6:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][5] == "*")
			{
				board[i][5] = p1Token;
				break;
			}
			else if (board[0][5] == "X" || board[0][5] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 7:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][6] == "*")
			{
				board[i][6] = p1Token;
				break;
			}
			else if (board[0][6] == "X" || board[0][6] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	default:
		break;
	}



	system("cls");
}

void player2Turn() // Same as player1Turn.
{

	currentPlayer = 2;

	std::cout << p2Name << " please enter a number from 1 to 7: ";
	std::cin >> drop;

	switch (drop)
	{
	case 1:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][0] == "*")
			{
				board[i][0] = p2Token;
				break;
			}
			else if (board[0][0] == "X" || board[0][0] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 2:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][1] == "*")
			{
				board[i][1] = p2Token;
				break;
			}
			else if (board[0][1] == "X" || board[0][1] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 3:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][2] == "*")
			{
				board[i][2] = p2Token;
				break;
			}
			else if (board[0][2] == "X" || board[0][2] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 4:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][3] == "*")
			{
				board[i][3] = p2Token;
				break;
			}
			else if (board[0][3] == "X" || board[0][3] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 5:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][4] == "*")
			{
				board[i][4] = p2Token;
				break;
			}
			else if (board[0][4] == "X" || board[0][4] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 6:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][5] == "*")
			{
				board[i][5] = p2Token;
				break;
			}
			else if (board[0][5] == "X" || board[0][5] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	case 7:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][6] == "*")
			{
				board[i][6] = p2Token;
				break;
			}
			else if (board[0][6] == "X" || board[0][6] == "O")
			{
				std::cout << "The column is full!";
				Sleep(2000);
				break;
			}

		}
		break;
	default:
		break;
	}



	system("cls");
}

void aiTurn()
{
	currentPlayer = 3;

	int x = rand() % 7; // Creates a variable that can be a random number 1-7.

	for (int i = 5; i >= 0; i--)
	{
		if (board[i][x] == "*")
		{
			board[i][x] = p2Token; // Adds an O on a random column from the bottom up.
			break;
		}
	}
	system("cls");
}

bool checkWin()
{
	int count = 0;


	for (int i = 0; i < 6; i++) // Horizontal check
	{
		count = 0;
		for (int j = 0; j < 7; j++)
		{
			if (board[i][j] == p1Token)
			{
				count++; // Adds to the count integer whenever a token is detected.

				if (count == 4) // Counts up to 4.
				{
					return true; 
				}
			}
			else
			{
				count = 0;
			}
		}
	}
	count = 0;

	for (int i{}; i < 7; i++) // Vertical check
	{
		count = 0;
		for (int k{}; k < 6; k++) 
		{
			if (board[k][i] == p1Token)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == 4)
			{
				return true;
			}
		}
	}

	count = 0;

	for (int i = 0; i < 6; i++) // Horizontal check for player 2
	{
		count = 0;
		for (int j = 0; j < 7; j++)
		{
			if (board[i][j] == p2Token)
			{
				count++;

				if (count == 4)
				{
					return true;
				}
			}
			else
			{
				count = 0;
			}
		}
	}
	count = 0;

	for (int i{}; i < 7; i++) // Vertical check for player 2
	{
		count = 0;
		for (int k{}; k < 6; k++)
		{
			if (board[k][i] == p2Token)
			{
				count++;
			}
			else
			{
				count = 0;
			}
			if (count == 4)
			{
				return true;
			}
		}
	}

	count = 0;

	for (int i = 0; i < 3; i++) // Credit to Bjørn for this diagonal check which i modified a little.
	{
		// i < 3 because only the 3 first rows can contain a diagonal victory
		for (int j = 0; j < 7; j++) 
		{
			// It will check the current space, and if it has an X it will go towards the lower right
			// It will continue until it gets to the win condition
			// Otherwise it will check the bottom left, and check almost the same thing as if it would check
			// to the bottom right
			if (board[i][j] == "X") 
			{
				if (board[i + 1][j + 1] == "X") 
				{
					if (board[i + 2][j + 2] == "X") 
					{
						if (board[i + 3][j + 3] == "X") 
						{
							return true;
						}
					}
				}
				else if (board[i + 1][j - 1] == "X") 
				{
					if (board[i + 2][j - 2] == "X") 
					{
						if (board[i + 3][j - 3] == "X")
						{
							return true;
						}
					}
				}
			}

			if (board[i][j] == "O") {
				if (board[i + 1][j + 1] == "O") 
				{
					if (board[i + 2][j + 2] == "O") 
					{
						if (board[i + 3][j + 3] == "O") 
						{
							return true;
						}
					}
				}
				else if (board[i + 1][j - 1] == "O")
				{
					if (board[i + 2][j - 2] == "O")
					{
						if (board[i + 3][j - 3] == "O") 
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool checkDraw()
{
	if (board[0][0] != "*" && board[0][1] != "*" && board[0][2] != "*" && board[0][3] != "*" && board[0][4] != "*" && board[0][5] != "*" && board[0][6] != "*" && board[0][7] != "*")
	{
		std::cout << "It's a draw!" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

void save() // I couldn't get this to work properly even though i think this should be correct.
{
	saveFile.seekg(0); // Seeks to the first position in the file.

	int num{};
	int counter{};

	while (saveFile >> num) 
	{
		if (counter == 1) 
		{
			player2Score = num;
			counter++;
		}
		else if (counter == 0)             // Adds variables to the txt file.
		{
			player1Score = num;
			counter++;
		}
		else 
		{
			aiScore = num;
			counter++;
		}
	}

	std::ofstream x("C:\\Users\\chris\\source\\repos\\Compulsory3f\\score.txt", std::ofstream::trunc);
	x.close();
	std::fstream saveFile("C:\\Users\\chris\\source\\repos\\Compulsory3f\\score.txt");                       // Outputs the updated values and  closes the file.

	saveFile << player1Score << "\n" << player2Score << "\n" << aiScore;
	saveFile.close();

	//std::cout << "Score saved successfully";
}


int main()
{
	srand(time(NULL));
	bool firstGame = true;
	char answer = 'y';

	while (tolower(answer) == 'y')  // Loops the game for as long as the player chooses.
	{
	board = {
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},   // Resets the board.
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"} };
	
	if (firstGame == true) // Shows the startscreen only during the first loop.
	{
		startScreen();
	}
	while (true)
	{
		drawBoard();
		player1Turn();
		checkDraw();
		if (checkWin())
		{
			if (currentPlayer == 1)
			{
				std::cout << p1Name << " wins!" << std::endl;
				player1Score++;
			}
			else if (currentPlayer == 2)
			{
				std::cout << p2Name << " wins!" << std::endl;        // Outputs based on the current player and adds a count to the related score variable.
				player2Score++;
			}
			else if (currentPlayer == 3)
			{
				std::cout << "AI wins!" << std::endl;
				aiScore++;
			}
			drawBoard();
			system("pause");

			std::cout << "Play again? y/n: ";
			std::cin >> answer;
			if (answer == 'y') 
			{
				firstGame = false;
				save();
				system("cls");
				break;
			}
			else
			{
				exit(0);
			}
		}
		drawBoard();
		if (aiON == false)
		{
			player2Turn();           // Runs player 2's turn or the AI's turn depending on what was chosen at the startscreen.
		}
		else
		{
			aiTurn();
		}

		checkDraw();

		if (checkWin())
		{
			if (currentPlayer == 1)
			{
				std::cout << p1Name << " wins!" << std::endl;
				player1Score++;
			}
			else if (currentPlayer == 2)
			{
				std::cout << p2Name << " wins!" << std::endl;
				player2Score++;
			}
			else
			{
				std::cout << "AI wins!" << std::endl;
				aiScore++;
			}
			drawBoard();
			system("pause");

			std::cout << "Play again? y/n: ";
			std::cin >> answer;
			if (answer == 'y')
			{
				firstGame = false;
				save();
				system("cls");
				break;
			}
			else
			{
				exit(0);
			}
		}

	}
}


	return 0;
}