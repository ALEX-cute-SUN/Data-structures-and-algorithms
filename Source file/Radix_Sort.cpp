#include"Radix_Sort.h"
#include <iostream>

int * Radix_Sort(int* Array, int Size) {
	List *Radix_Bucket = (List*)malloc(10 * sizeof(struct Node *));
	for (int i = 0; i < 10; ++i) {
		List L = CreateList();
		Radix_Bucket[i] = L;
	}
	bool flag = true;
	int Count = 1;
	while (flag) {
		flag = false;
		int x = 10 * Count;
		for (int i = 0; i < Size; ++i) {
			Insert(Array[i], Radix_Bucket[(Array[i] % x) / Count], Radix_Bucket[(Array[i] % x) / Count]);
			if ((Array[i] % x)/Count != 0 && !flag)
				flag = true;
		}
		int j = 0;
		for (int i = 0; i < 10; ++i) {
			Position P = Radix_Bucket[i]->next;
			Radix_Bucket[i]->next = NULL;
			while (P != NULL) {
				Position TmpCell;
				Array[j] = P->value;
				P->value = 0;
				TmpCell = P;
				P = P->next;
				free(TmpCell);
				++j;
			}
		}
		Count *= 10;
		for (int i = 0; i < 18; ++i) {
			printf("%d\n", Array[i]);
		}
		printf("\n");
	}
	return Array;
}