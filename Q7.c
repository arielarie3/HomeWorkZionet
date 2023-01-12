#include <stdio.h>
#pragma warning(disable:4996)

//קלטו מהמשתמש מחרוזת, כל עוד המחרוזת שהוא הכניס קטנה מ 10 תוים המשיכו לבקש ממנו שיכניס עוד מחרוזת עד שהיא תהיה בגודל 10 תוים (אפשר להניח שהיוזר לא יכניס יותר מ 100 תוים)

int main()
{
	char str[100];
	printf("Please enter a string: ");
	gets(str);
	int s = strlen(str);
	while (s < 10)
	{
		printf("Please enter another string: ");
		gets(str);
		s = strlen(str);

	}

	
	getch();
	return 0;
}
