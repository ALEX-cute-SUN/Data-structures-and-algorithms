#include"Stack_List.h"

int isEmpty(Stack S) {
	return S->next == NULL;
}
Stack 
CreateStack(Stack S) {
	Stack stack = (Stack)malloc(sizeof(struct Node));
	if (stack == NULL)
		printf("ERROR MALLOC\n");
	stack->next = NULL;
	stack->value = 0;
	return stack;
}
void Push(int X, Stack S) {
	Stack stack = (Stack)malloc(sizeof(struct Node));
	if (stack == NULL)
		printf("ERROR MALLOC");
	else {
		stack->next = S->next;
		stack->value = X;
		S->next = stack;
	}
}

int Pop(Stack S) {
	if (S->next == NULL) {
		printf("NONE ELEMENT");
		return 0;
	}
	Stack stack_pop = S->next;
	S->next = stack_pop->next;

	int value = 0;
	stack_pop->next = NULL;
	value = stack_pop->value;
	stack_pop->value = 0;
	free(stack_pop);
	return value;
}
int Top(Stack S) {
	if(!isEmpty(S))
		return S->next->value;
	printf("IS EMPTY");
	return 0;
}
void MakeEmpty(Stack S) {
	if (S == NULL) {
		printf("STACK NOT EXIST");
		return;
	}
	while (1);
}
