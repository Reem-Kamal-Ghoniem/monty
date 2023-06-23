#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - main function
* @argc: arguments number
* @argv: arguments array
* Return: int
*/
int main(int argc, char *argv[])
{
	char content[1024];
	FILE *file;
	/**size_t size = 0;*/
	char *read_line = NULL;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line != NULL)
	{
		read_line = fgets(content, 1024, file);
		bus.content = content;
		counter++;
		if (read_line != NULL)
			execute(content, &stack, counter, file);

		/**free(content);*/
	}
	free_stack(stack);
	fclose(file);
return (0);
}
