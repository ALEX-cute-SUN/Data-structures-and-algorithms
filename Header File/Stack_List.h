#pragma once
#ifndef STACK_LIST_H
#define STACK_LIST_H

#include<stdlib.h>
#include<stdio.h>
struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode Stack ;
struct Node {
	int value;
	PtrToNode next;
};

int isEmpty(Stack S);
Stack CreateStack(Stack S);
void Push(int x, Stack S);
int Pop(Stack S);
int Top(Stack S);
void MakeEmpty(Stack S);
void DisposeStrack(Stack S);
#endif // !STACK_LIST_H
