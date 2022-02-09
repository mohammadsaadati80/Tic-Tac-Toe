#include <stdio.h>

void board(char cells[]); // tabe jadval
int initialgame(char cells[], int turn); // tabe gereftan voroodi
int checkwin(int turn, int win, char cells[], int j, int checkgame); //tabe shart bord va bazi jadid

int m; // moteghayyer daryaft voroodi
char cells[9] = { '1', '2', '3', '4', '5', '6', '7', '8' , '9' }; // moteghayyer jadval
int turn = 1; //moteghayyer nobat
int win = 1;// moteghayyer jaryan bazi
int checkgame = 1; // moteghayyer payan bazi
int j; // moteghayyer drayaft voroodi payan bazi

int main() {
	printf("\tTic Tac Toe\n\n");

	while (1)
	{

		if (checkgame == 1) {

			board(cells);
			initialgame(cells, turn);
			checkwin(turn, win, cells, j, checkgame);

			{
				if (turn == 1)
					turn = 2;
				else
					turn = 1;
			}

		}
		else if (checkgame == 0) {
			break;
		}

	}

	return 0;
}


void board(char cells[])
{

	printf("\nPlayer 1 (X) - Player 2 (O)\n\n"); /*namayesh jadval bazi baraye
												 shorooe bazi jadid*/
	printf("   |   |    \n");
	printf(" %c | %c | %c\n", cells[0], cells[1], cells[2]);

	printf("   |   |    \n");

	printf("------------\n");
	printf("   |   |    \n");

	printf(" %c | %c | %c\n", cells[3], cells[4], cells[5]);

	printf("   |   |    \n");

	printf("------------\n");

	printf("   |   |    \n");

	printf(" %c | %c | %c\n", cells[6], cells[7], cells[8]);

	printf("   |   |    \n");
}

int initialgame(char cells[], int turn)
{
	int m;

	while (1) {
		if (turn == 1) /*namayesh nobat entekhab bazikon*/

		{
			printf("\nPlayer's one turn:\n Please choose a number between 1 to 9\n");
		}
		else if (turn == 2)
		{
			printf("\nPlayer's two turn:\n Please choose a number between 1 to 9\n");
		}

		scanf_s("%d", &m);

		if (m < 1 || m > 9) /*barresi dar mahdoode boodan adad entekhabi*/
		{
			printf("\nInvalid number.\n Your number isn't between 1 to 9\n");
			continue;
		}

		if ((m == 1 && (cells[0] == 'X' || cells[0] == 'O')) || (m == 2 && (cells[1]
			== 'X' || cells[1] == 'O')) || (m == 3 && (cells[2] == 'X' || cells[2] == 'O'))
			|| (m == 4 && (cells[3] == 'X' || cells[3] == 'O')) || (m == 5 && (cells[4] ==
				'X' || cells[4] == 'O')) || (m == 6 && (cells[5] == 'X' || cells[5] == 'O')) ||
				(m == 7 && (cells[6] == 'X' || cells[6] == 'O')) || (m == 8 && (cells[7] == 'X'
					|| cells[7] == 'O')) || (m == 9 && (cells[8] == 'X' || cells[8] == 'O')))
		{ /*barresi khali boodan khane madde nazar */
			printf("\nYour number is chosen.\n");
			continue;
		}
		break;
	}

	if ((m == 1) && (turn == 1))
		cells[0] = 'X';
	else if (m == 1 && cells[0] == '1' && turn == 2)
		cells[0] = 'O';
	else if (m == 2 && cells[1] == '2' && turn == 1)
		cells[1] = 'X';
	else if (m == 2 && cells[1] == '2' && turn == 2)
		cells[1] = 'O';
	else if (m == 3 && cells[2] == '3' && turn == 1)
		cells[2] = 'X';
	else if (m == 3 && cells[2] == '3' && turn == 2)
		cells[2] = 'O';
	else if (m == 4 && cells[3] == '4' && turn == 1)
		cells[3] = 'X';
	else if (m == 4 && cells[3] == '4' && turn == 2)
		cells[3] = 'O';
	else if (m == 5 && cells[4] == '5' && turn == 1)
		cells[4] = 'X';
	else if (m == 5 && cells[4] == '5' && turn == 2)
		cells[4] = 'O';
	else if (m == 6 && cells[5] == '6' && turn == 1)
		cells[5] = 'X';
	else if (m == 6 && cells[5] == '6' && turn == 2)
		cells[5] = 'O';
	else if (m == 7 && cells[6] == '7' && turn == 1)
		cells[6] = 'X';
	else if (m == 7 && cells[6] == '7' && turn == 2)
		cells[6] = 'O';
	else if (m == 8 && cells[7] == '8' && turn == 1)
		cells[7] = 'X';
	else if (m == 8 && cells[7] == '8' && turn == 2)
		cells[7] = 'O';
	else if (m == 9 && cells[8] == '9' && turn == 1)
		cells[8] = 'X';
	else if (m == 9 && cells[8] == '9' && turn == 2)
		cells[8] = 'O';

	return 0;

}

int checkwin(int turn, int win, char cells[], int j, int checkgame)

{

	if (turn == 1) /*barresi sharte piroozi bazi ba tavajjoh be nobat*/
		if (cells[0] == cells[1] && cells[1] == cells[2]) {
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[0] == cells[4] && cells[4] == cells[8])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[0] == cells[3] && cells[3] == cells[6])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[3] == cells[4] && cells[4] == cells[5])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[1] == cells[4] && cells[4] == cells[7])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[2] == cells[5] && cells[5] == cells[8])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[2] == cells[4] && cells[4] == cells[6])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if (cells[6] == cells[7] && cells[7] == cells[8])
		{
			printf("\nCongratulation!\n Player one won the game.\n");
			win = 0;
		}
		else if ((cells[0] == 'X' || cells[0] == 'O') && (cells[1] == 'X' || cells[1]
			== 'O') && (cells[2] == 'X' || cells[2] == 'O') && (cells[3] == 'X' || cells[3]
				== 'O') && (cells[4] == 'X' || cells[4] == 'O') && (cells[5] == 'X' || cells[5]
					== 'O') && (cells[6] == 'X' || cells[6] == 'O') && (cells[7] == 'X' || cells[7]
						== 'O') && (cells[8] == 'X' || cells[8] == 'O'))
		{ /*barresi sharte tasavi bazi*/
			printf("\nThe game is over!\n No one has won the game.\n");
			win = 0;
		}

	if (turn == 2) /*barresi sharte piroozi bazi ba tavajjoh be nobat*/
		if (cells[0] == cells[1] && cells[1] == cells[2]) {
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[0] == cells[4] && cells[4] == cells[8])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[0] == cells[3] && cells[3] == cells[6])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[3] == cells[4] && cells[4] == cells[5])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[1] == cells[4] && cells[4] == cells[7])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[2] == cells[5] && cells[5] == cells[8])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[2] == cells[4] && cells[4] == cells[6])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}
		else if (cells[6] == cells[7] && cells[7] == cells[8])
		{
			printf("\nCongratulation!\n Player two won the game.\n");
			win = 0;
		}

	if (win == 0) /*barresi payan yaftan yek dor bazi va tasmim giri baraye bazi
				  jadid ya khorooj*/
	{
		int j;
		printf("\nPress 1 if you want to start a new game. Otherwise press 2. \n");
		scanf_s("%d", &j);

		if (j == 1) { /*bargardandan tamami moteghayyer ha va jadval bazi be halat
					  avvalieh baraye shorooe bazi jadid */
			turn = 2;
			win = 1;
			cells[0] = '1';
			cells[1] = '2';
			cells[2] = '3';
			cells[3] = '4';
			cells[4] = '5';
			cells[5] = '6';
			cells[6] = '7';
			cells[7] = '8';
			cells[8] = '9';
		}
		else if (j == 2) { /*khorooj az bazi*/
			checkgame = 0;
		}

	}
	return checkgame;
}