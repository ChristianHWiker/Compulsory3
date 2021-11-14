#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

int row{};
int col{};

std::string	p1Name;
char p1Token = 'X';
std::string p2Name;
char p2Token = 'O';
int drop{};

std::string AI = "AI";
bool aiON = false;

void drawBoard();
void startScreen();
void game();
void dropToken();
void checkWin();


std::string board[7][7]{ {"1","2","3","4","5","6","7"},{ "*","*","*","*","*","*","*"},{"*","*","*","*","*","*","*"},{"*","*","*","*","*","*","*"},
{ "*","*","*","*","*","*","*"},{ "*","*","*","*","*","*","*"},{ "*","*","*","*","*","*","*"} };

void startScreen()
{
	std::cout << "Welcome to connect 4 !!\n\n";
	system("pause");
	system("cls");

	std::cout << "Enter player 1 name: ";
	getline(std::cin, p1Name);

	std::cout << "Enter player 2 name: ";
	getline(std::cin, p2Name);

	for (int i = 0; i < sizeof(p2Name); i++)
	{
		if (p2Name[i] == toupper(AI[i]))
		{
			bool aiON = true;
		}
		else
		{
			break;
		}
	}

	system("cls");
}

void drawBoard()
{
	for (int i = 0; i < 7; i++)
	{
		std::cout << "|";
		for (int j = 0; j < 6; j++)
		{
			std::cout << board[i][j];
			std::cout << "--";
		}
		std::cout << "|";
		std::cout << std::endl;
		
	}
}

void game()
{
	int currentPlayer = 1;
	std::cout << "Player " << currentPlayer << " please Enter a number from 0 to 7: ";
	std::cin >> drop;

	bool p1Turn = true;

	if (aiON == false)
	{
		switch (drop)
		{
		case 1:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][0] == "*")
				{
					board[i][0] = p1Token;
					break;
				}
				
			}
			break;
		case 2:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][1] == "*")
				{
					board[i][1] = p1Token;
					break;
				}

			}
			break;
		case 3:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][2] == "*")
				{
					board[i][2] = p1Token;
					break;
				}

			}
			break;
		case 4:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][3] == "*")
				{
					board[i][3] = p1Token;
					break;
				}

			}
			break;
		case 5:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][4] == "*")
				{
					board[i][4] = p1Token;
					break;
				}

			}
			break;
		case 6:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][5] == "*")
				{
					board[i][5] = p1Token;
					break;
				}

			}
			break;
		case 7:
			for (int i = 6; i >= 0; i--)
			{
				if (board[i][6] == "*")
				{
					board[i][6] = p1Token;
					break;
				}

			}
			break;
		default:
			break;
		}
	}
	else
	{

	}
}

void dropToken()
{
	
}

void checkWin()
{

}

int main()
{
	bool gameOver = false;

	startScreen();

	while (gameOver == false)
	{
		drawBoard();
		game();
		dropToken();
	}
	

	return 0;
}