#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
	double key;
	double *parent;
};

int main(void)
{
	int input, halt;
	int list_length;
	char line[10], node;

	halt = 1;

	while (halt != 0)
	{
		printf("what do you want to call the new node? \n");
		scanf("%c", &node);

		struct linked_list node;

		printf("enter value of node: \n");
		scanf("%d", &input);

		node.key = input;
		node.parent = NULL;

		printf("%lf \n", node.key);

		printf("enter 0 to halt the program \n");
		scanf("%d", &halt);
	}

	return (0);
}
