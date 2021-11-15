#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

int row{};
int col{};

std::string	p1Name{};
std::string p1Token = "X";
std::string p2Name{};
std::string p2Token = "O";
int drop{};
int currentPlayer{};

std::string AI = "AI";
bool aiON = false;

void drawBoard();
void startScreen();
void player1Turn();
void player2Turn();
void aiTurn();
bool checkWin();


std::vector<std::vector<std::string>> board = {
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"},
	{ "*","*","*","*","*","*","*"} };

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

	int currentPlayer = 1;

	std::cout << p1Name << " please enter a number from 1 to 7: ";
	std::cin >> drop;

	switch (drop)
	{
	case 1:
		for (int i = 5; i >= 0; i--)
		{
			if (board[i][0] == "*")
			{
				board[i][0] = p1Token;
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

void player2Turn()
{

	int currentPlayer = 2;

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

}

bool checkWin()
{
	int count = 0;
	//for (int i = 0; i > 0; i++) // Horizontal
	//{
	//	count = 0;
	//	for (int j = 0; j < 7; j++)
	//	{
	//		if (board[i][j] == p1Token)
	//		{
	//			count++;

	//			if (count == 4)
	//			{
	//				return true;
	//			}
	//			else
	//			{
	//				count = 0;
	//			}
	//		}
	//	}
	//}
	count = 0;

	for (int i = 0; i < 6; i++)
	{
		count = 0;
		for (int j = 0; j < 7; j++)
		{
			if (board[i][j] == p1Token)
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

	for (int i{}; i < 7; i++) // Vertical
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
	return false;


	//int x{}, y{};

	//for (int z{}; z < 4; z++) { // Diag Right
	//	x = z;
	//	y = 0;
	//	while (x < 7) {
	//		if (board[y][x] != "*") {
	//			count++;
	//		}
	//		else {
	//			count = 0;
	//		}
	//		if (count == 4) {
	//			return true;
	//		}
	//		y++;
	//		x++;
	//	}
	//}


	//count = 0;
	//x = 0;
	//y = 0;

	//for (int z{}; z < 3; z++) { // Diag right 2
	//	x = 0;
	//	y = z;
	//	while (y < 6) {
	//		if (board[y][x] == p1Token) {
	//			count++;
	//		}
	//		else {
	//			count = 0;
	//		}
	//		if (count == 4) {
	//			return true;
	//		}
	//		y++;
	//		x++;
	//	}
	//}


	//count = 0;
	//x = 0;
	//y = 0;

	//for (int z{ 6 }; z > 2; z--) { // Diag Left 1
	//	x = z;
	//	y = 0;
	//	for (int i{}; i < z - 1; i++) {
	//		if (board[y][x] == p1Token) {
	//			count++;
	//		}
	//		else {
	//			count = 0;
	//		}
	//		if (count == 4) {
	//			return true;
	//		}
	//		y++;
	//		x--;
	//	}
	//}

	//count = 0;
	//x = 0;
	//y = 0;

	//for (int z{ 1 }; z < 5; z++) { // Diag Left 2
	//	x = 6;
	//	y = z;
	//	for (int i{}; i < 6 - z; i++) {
	//		if (board[y][x] == p1Token) {
	//			count++;
	//		}
	//		else {
	//			count = 0;
	//		}
	//		if (count == 4) {
	//			return true;
	//		}
	//		y++;
	//		x--;
	//	}
	//}
	//return false;
}

int main()
{
	bool gameOver = false;
	srand(time(NULL));

	startScreen();

	while (true)
	{
		drawBoard();
		player1Turn();
		if (checkWin())
		{
			if (currentPlayer == 1)
			{
				std::cout << p1Name << " wins!" << std::endl;
			}
			else
			{
				std::cout << p2Name << " wins!" << std::endl;
			}
			system("pause");
			break;
		}
		drawBoard();
		if (aiON == false)
		{
			player2Turn();
		}
		else
		{
			aiTurn();
		}
	}


	return 0;
}