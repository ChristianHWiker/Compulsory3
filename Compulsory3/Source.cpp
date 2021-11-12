#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

int row{};
int col{};

std::string	p1Name;
char p1Token = 'X';
std::string p2Name;
char p2Token = 'O';

void drawBoard();
void startScreen();


std::string board[7][7]{ {"1","2","3","4","5","6","7"},{ "*","*","*","*","*","*","*"},{"*","*","*","*","*","*","*"},{"*","*","*","*","*","*","*"},
{ "*","*","*","*","*","*","*"},{ "*","*","*","*","*","*","*"},{ "*","*","*","*","*","*","*"} };

void startScreen()
{
	std::cout << "Welcome to connect 4 !!\n\n";

	std::cout << "Enter player 1 name: ";
	

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

int main()
{
drawBoard();

	return 0;
}