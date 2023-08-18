#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "SS-Shell >> ";
	char *lineptr;
	size_t n = 0;
	ssize_t num_char_read;

	/* declaring void variables */
	(void)ac; (void)argv;

	/* infinite loop */
	while(1)
	{
		printf("%s", prompt);
		num_char_read = getline(&lineptr, &n, stdin);

		/* checks if the getline function failed or reached EOF or user CtrlD */
		if (num_char_read == -1)
		{
			printf("\nLogging off <<<   \n");
			return (-1);
		}

		printf("%s\n", lineptr);
		
		/* free allocated memory */
		free(lineptr);
	}
	return (0);
}
