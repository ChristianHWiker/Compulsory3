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

std::string AI = "AI";
bool aiON = false;

void drawBoard();
void startScreen();
void game();
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
	if (aiON = false)
	{

	}
	else
	{

	}
}

void checkWin()
{

}

int main()
{
	startScreen();
	drawBoard();

	return 0;
}