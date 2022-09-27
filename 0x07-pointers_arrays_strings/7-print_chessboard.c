#include "main.h"
/**
*print_chessboard - that prints the chessboard
*@a: the rows
*/
void print_chessboard(char (*a)[8])
{
<<<<<<< HEAD
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
=======
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
>>>>>>> d8d412eeb7dca023001417082c1478a5b9695476
}
