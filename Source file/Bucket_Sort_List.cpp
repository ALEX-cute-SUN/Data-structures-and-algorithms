#pragma once

#include"Bucket_Sort_List.h"

void bucket_sort(int* Array, int size, int low, int high) {
	List* bucket = (List*)malloc((high - low + 1) * sizeof(List));
	for (int i = 0; i <= high - low; ++i) {
		List L = CreateList();
		bucket[i] = L;
	}
	for (int i = 0; i < size; ++i) {
		bool flag =  Insert(Array[i], bucket [Array[i] - low], bucket[Array[i] - low]);
		if (!flag)
			printf("ERROR\n");
	}
	for (int i = 0; i <= high - low; ++i) {
		List L = bucket[i];
		Position P = L->next;
		while (P != NULL) {
			printf("%d\n", P->value);
			P = P->next;
		}
	}
	for (int i = 0; i <= high - low; ++i) {
		DeleteList(bucket[i]);
	}
	free(bucket);
}