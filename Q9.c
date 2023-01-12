#include <stdio.h>
#pragma warning(disable:4996)

//קלטו מהמשתמש מחרוזת והדפיסו את מחציתה ללא שימוש בלולאה

int main()
{
		printf("Please enter a string: ");
		char str[20];
		gets(str);
		int s = strlen(str)/2;
		str[s] = 0;
		printf("the half of the string is: %s\n", str);
	


	getch();
	return 0;
}
