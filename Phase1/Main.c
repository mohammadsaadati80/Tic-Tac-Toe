#include <stdio.h>
int main() {

	printf("\tTic Tac Toe\n\n");

	printf("Player 1 (X)  -   Player 2 (O)\n\n\n");

	char a = '1'; /*moteghayyer haye har khane az jadval bazi*/
	char b = '2';
	char c = '3';
	char d = '4';
	char e = '5';
	char f = '6';
	char g = '7';
	char h = '8';
	char i = '9';

	printf("   |   |    \n"); /*namayesh jadval bazi*/
	printf(" %c | %c | %c\n", a, b, c);

	printf("   |   |    \n");

	printf("------------\n");
	printf("   |   |    \n");

	printf(" %c | %c | %c\n", d, e, f);

	printf("   |   |    \n");

	printf("------------\n");

	printf("   |   |    \n");

	printf(" %c | %c | %c\n", g, h, i);

	printf("   |   |    \n");

	int win = 1; /*moteghayyer shorooe payan va khateme dadan be bazi*/
	int turn = 1; /*moteghayyer taviz nobat*/

	while (1) { /*halghe kolli bazi*/

		if (turn == 1) /*namayesh nobat entekhab bazikon*/

		{
			printf("\nPlayer's one turn:\n Please choose a number between 1 to 9\n");
		}
		else if (turn == 2)
		{
			printf("\nPlayer's two turn:\n Please choose a number between 1 to 9\n");
		}

		int m; /*daryaft voroodi az bazikon*/
		scanf_s("%i", &m);

		if (m < 1 || m > 9) /*barresi dar mahdoode boodan adad entekhabi*/
		{
			printf("\nInvalid number.\n Your number isn't between 1 to 9\n");
			continue;
		}

		if ((m == 1 && (a == 'X' || a == 'O')) || (m == 2 && (b == 'X' || b == 'O')) || (m == 3 && (c == 'X' || c == 'O')) || (m == 4 && (d == 'X' || d == 'O')) || (m == 5 && (e == 'X' || e == 'O')) || (m == 6 && (f == 'X' || f == 'O')) || (m == 7 && (g == 'X' || g == 'O')) || (m == 8 && (h == 'X' || h == 'O')) || (m == 9 && (i == 'X' || i == 'O')))
		{ /*barresi khali boodan khane madde nazar */
			printf("\nYour number is choosen.\n");
			continue;
		}


		if (m == 1 && a == '1' && turn == 1) /*jagozari alamat X ya O ba tavajjoh be nobat va khane entekhabi*/
			a = 'X';
		else if (m == 1 && a == '1' && turn == 2)
			a = 'O';
		else if (m == 2 && b == '2' && turn == 1)
			b = 'X';
		else if (m == 2 && b == '2' && turn == 2)
			b = 'O';
		else if (m == 3 && c == '3' && turn == 1)
			c = 'X';
		else if (m == 3 && c == '3' && turn == 2)
			c = 'O';
		else if (m == 4 && d == '4' && turn == 1)
			d = 'X';
		else if (m == 4 && d == '4' && turn == 2)
			d = 'O';
		else if (m == 5 && e == '5' && turn == 1)
			e = 'X';
		else if (m == 5 && e == '5' && turn == 2)
			e = 'O';
		else if (m == 6 && f == '6' && turn == 1)
			f = 'X';
		else if (m == 6 && f == '6' && turn == 2)
			f = 'O';
		else if (m == 7 && g == '7' && turn == 1)
			g = 'X';
		else if (m == 7 && g == '7' && turn == 2)
			g = 'O';
		else if (m == 8 && h == '8' && turn == 1)
			h = 'X';
		else if (m == 8 && h == '8' && turn == 2)
			h = 'O';
		else  if (m == 9 && i == '9' && turn == 1)
			i = 'X';
		else  if (m == 9 && i == '9' && turn == 2)
			i = 'O';

		printf("\n   |   |    \n"); /*nameyesh shekle taghir yafte jadval*/
		printf(" %c | %c | %c\n", a, b, c);

		printf("   |   |    \n");

		printf("------------\n");
		printf("   |   |    \n");

		printf(" %c | %c | %c\n", d, e, f);

		printf("   |   |    \n");

		printf("------------\n");

		printf("   |   |    \n");

		printf(" %c | %c | %c\n", g, h, i);

		printf("   |   |    \n");


		if (turn == 1) /*barresi sharte piroozi bazi ba tavajjoh be nobat*/
			if (a == b &&  b == c) {
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (a == e &&  e == i)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (a == d &&  d == g)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (d == e &&  e == f)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (b == e &&  e == h)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (c == f && f == i)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (c == e &&  e == g)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if (g == h &&  h == i)
			{
				printf("\nCongratulation!\n Player one won the game.\n");
				win = 0;
			}
			else if ((a == 'X' || a == 'O') && (b == 'X' || b == 'O') && (c == 'X' || c == 'O') && (d == 'X' || d == 'O') && (e == 'X' || e == 'O') && (f == 'X' || f == 'O') && (g == 'X' || g == 'O') && (h == 'X' || h == 'O') && (i == 'X' || i == 'O'))
			{ /*barresi sharte tasavi bazi*/
				printf("\nThe game is over!\n No one has won the game.\n");
				win = 0;
			}

		if (turn == 2) /*barresi sharte piroozi bazi ba tavajjoh be nobat*/
			if (a == b &&  b == c) {
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (a == e &&  e == i)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (a == d &&  d == g)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (d == e &&  e == f)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (b == e &&  e == h)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (c == f && f == i)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (c == e &&  e == g)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}
			else if (g == h &&  h == i)
			{
				printf("\nCongratulation!\n Player two won the game.\n");
				win = 0;
			}


		if (win == 0) /*barresi payan yaftan yek dor bazi va tasmim giri baraye bazi jadid ya khorooj*/
		{
			printf("\nPress 1 if you want to start a new game. Otherwise press 2. \n");
			int j;
			scanf_s("%i", &j);

			if (j == 1) { /*bargardandan tamami moteghayyer ha va jadval bazi be halat avvalieh baraye shorooe bazi jadid  */
				turn = 1;
				win = 1;
				a = '1';
				b = '2';
				c = '3';
				d = '4';
				e = '5';
				f = '6';
				g = '7';
				h = '8';
				i = '9';

				printf("\nPlayer 1 (X)  -   Player 2 (O)\n\n"); /*namayesh jadval bazi baraye shorooe bazi jadid*/

				printf("\n   |   |    \n");
				printf(" %c | %c | %c\n", a, b, c);

				printf("   |   |    \n");

				printf("------------\n");
				printf("   |   |    \n");

				printf(" %c | %c | %c\n", d, e, f);

				printf("   |   |    \n");

				printf("------------\n");

				printf("   |   |    \n");

				printf(" %c | %c | %c\n", g, h, i);

				printf("   |   |    \n");

				continue;

			}

			else if (j == 2) { /*khorooj az bazi*/
				break;
			}


		}


		if (turn == 1) /*taghyir nobat bazi*/
		{
			turn = 2;
			continue;
		}
		else
		{
			turn = 1;
			continue;
		}


	}

}