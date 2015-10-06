#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
	double key;
	double *parent;
};

int main(void)
{
	int input, halt, node;
	int list_length;
	halt = 1;

	while (halt != 0)
	{
		printf("what do you want to call the new node?");
		sscanf(line, "%c", &node);

		struct linked_list node;
		node.key = ;
		node.parent = ;

		printf("enter 0 to halt the program \n");
		scanf("%d", &halt);
	}

	return (0);
}
