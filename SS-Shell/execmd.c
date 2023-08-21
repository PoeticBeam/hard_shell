#include "main.h"

void execmd(char **argv)
{
	char *instruct = NULL;

	/* if command passed to first position in array not NULL */
	if (argv)
	{
		instruct = argv[0];

		if (execve(instruct, argv, NULL) == -1)
		{
			perror("Error:");
		};
	}
}
