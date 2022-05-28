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
			List Bucket_L = Radix_Bucket[(Array[i] % x) / Count];
			Position Bucket_P = Radix_Bucket[(Array[i] % x) / Count];
			while (Bucket_P->next != NULL && Bucket_P->next->value < Array[i]) {
				Bucket_P = Bucket_P->next;
			}
			Insert(Array[i], Bucket_P, Bucket_L);
			if ((Array[i] % x)/Count != 0 && !flag)
				flag = true;
		}
		int j = 0;
		printf("bucket----------------\n");
		for (int i = 0; i < 10; ++i) {
			Position P = Radix_Bucket[i]->next;
			while (P != NULL) {
				printf("%d ", P->value);
				P = P->next;
			}
			printf("\n");
		}
		printf("bucket----------------\n");
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