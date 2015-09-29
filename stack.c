#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void push(int *stack, int input);
void pop(int *stack);
void print_stack(int *stack);

int
main(void)
{
	int stack[10];
	int opt, halt, input;
	int i;

	stack[0] = 0;
	halt = 1;

	while (halt != 0)
	{
		printf("To push to stack press 1 and to pop from stack press 2.\n");
		scanf("%d", &opt);

		if (opt == 1)
		{
			printf("Enter value to be pushed to stack.\n");
			scanf("%d", &input);
			push(stack, input);
		}

		else if (opt == 2)
		{
			pop(stack);
		}

		printf("If you want to halt the program, press 0.\n");
		scanf("%d", &halt);

		print_stack(stack);	
	}

	return (0);	
}

void push(int *stack, int input)
{
	if (stack[0] == 9)
	{
		printf("The stack is already full!\n");
	}

	else
	{
		stack[0] += 1;
		stack[stack[0]] = input;
	}

	return;
}

void pop(int *stack)
{
	if (stack[0] != 0)
	{
		printf("%d \n", stack[stack[0]]);
		stack[0] = stack[0] -1;
	}

	else
	{
		printf("The stack is empty!\n");
	}

	return;
}
void print_stack(int *stack)
{
	int i;

	printf("The contents of the stack are :\t");

	if(stack[0] != 0)
	{
		for(i=1; i<stack[0] +1; i++)
		{
			printf("%d,", stack[i]);
		}

		printf("\n");
	}

	else
	{
		printf("The stack is empty, add something!\n");
	}

	return;
}
