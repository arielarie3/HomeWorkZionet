#include <stdio.h>
#pragma warning(disable:4996)

//קלטו מהמשתמש 5 מחרוזות והדפיסו את התו השני עבור כל מחרוזת

int main()
{

	for (int i = 0; i < 5; i++)
	{
		printf("Please enter a string: ");
		char str[15];
		gets(str);
		printf("the second char for this string is %c\n", str[1]);
	}


	getch();
	return 0;
}
