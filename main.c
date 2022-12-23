#include "monty.h"

int main(int argc, char **argv)
{
	int fd, i = 0;
	ssize_t bytes_read;
	FILE *filestream;
	char *lineptr = NULL;
	size_t n;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/*Try to open the file*/
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	filestream = fdopen(fd, "r");

	/*check opcode on specific line while reading line by line*/
	do
	{
		bytes_read = getline(&lineptr, &n, filestream);
		
		/*check if the */
	}
	while (bytes_read != -1);
	

	printf("%d\n", fd);
	return (1);
}
