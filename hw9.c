#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void)
{
	char text[100];
	int i;

	printf("Input> ");
	fgets(text, sizeof(text), stdin);

	for (i = 0; text[i] != '\0'; i++)
	{
		if (text[i] == '\n')
			text[i] = '\0'; 
	}

	for (i = 0; text[i] != '\0'; i++)
	{
		text[i] = convCase(text[i]);
	}

	printf("Output> %s", text);
	return 0;
}