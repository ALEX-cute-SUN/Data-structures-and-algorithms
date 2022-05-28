#include "List.h"
//correct


List MakeEmpty(List L) {
	Position temp = L->next;
	
	while (temp != NULL){
		Position temp_ = temp->next;
		free(temp);
		temp = temp_;
	}
	return L;
}
//correct
bool 
IsEmpty(List L) {
	return L->next == NULL;
}
//correct
bool 
IsLast(Position P, List L) {
	return P->next == NULL;
}

//correct
Position 
Find(int X, List L) {
	Position P = L->next;
	while (P != NULL && P->value != X) {
		P = P->next;
	}
	return P;
}
//correct
Position 
FindPrevious(int X, List L) {
	Position P = L;
	while (P->next != NULL && P->next->value != X) {
		P = P->next;
	}
	return P;
}
//correct
void 
Delete(int X, List L) {
	Position P = FindPrevious(X, L);
	if (!IsLast(P,L)) {
		Position temp = P->next;
		P->next = temp->next;
		free((void*)temp);
	}
}
//correct
bool 
Insert(int X, Position P, List L) {
	Position TmpCell;
	TmpCell = (Position)malloc(sizeof(struct Node));
	if (TmpCell == NULL)
		return false;
	TmpCell->value = X;
	TmpCell->next = P->next;
	P->next = TmpCell;
	return true;
}

List 
CreateList() {
	List L = (List)malloc(sizeof(struct Node));
	L->value = 0;
	L->next = NULL;
	return L;
}


void DeleteList(List L) {
	Position P,TmpCell;
	P = L->next;
	L->next = NULL;
	while (P != NULL) {
		TmpCell = P;
		P = P->next;
		free(TmpCell);
	}
}

/*
void
DeleteList(List L) {
	Position P,TmpCell;
	P = L->next;
	L->next = NULL;
	while (P != NULL) {
		TmpCell = P->next;
		free(P);
		P = NULL;
		P = TmpCell;
	}
}
*/
//correct


Position Header(List L) {
	return L;
}
Position First(List L) {
	return L->next;
}
Position Advance(Position P) {
	return P->next;
}
int Retrive(Position P)
{
	return 0;
}