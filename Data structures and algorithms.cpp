// Data structures and algorithms.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "List.h"
#include"Bucket_Sort_List.h"

#define TYPE 1
int main()
{
#if (TYPE == 0)
    List L = CreateList();
    bool flag = Insert(100, L, L);
    if (!flag)
        printf("insert error\n");
    flag = Insert(199, L, L);
    if (!flag)
        printf("insert error\n");
    flag = Insert(1999, L, L);
    if (!flag)
        printf("insert error\n");
    Position P = Find(199, L);
    flag = Insert(1000, P, L);
    if (!flag)
        printf("insert error\n");
    DeleteList(L);
#endif

#if (TYPE == 1)
    int a[] = {10,32,23,13,14,15,18,21,19,12};
    int* p = a;
    bucket_sort(p, 10, 10, 32);
#endif
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
