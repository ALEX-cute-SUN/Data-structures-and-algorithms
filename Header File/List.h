#pragma once
#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
	int value;
	Position next;
};
List MakeEmpty(List L);

bool IsEmpty(List L);

bool IsLast(Position P, List L);

Position Find(int X, List L);

void Delete(int X, List L);

Position FindPrevious(int X, List L);

bool Insert(int X, Position P, List L);

List CreateList();

void DeleteList(List L);

Position Header(List L);

Position First(List L);

Position Advance(Position P);

int Retrive(Position P);


#endif // !LIST_H
