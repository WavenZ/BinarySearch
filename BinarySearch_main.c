#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "BinarySearch.h"

int main(int argc, char *argv[]) {
	FILE* fp;
	SSTable ST;
	ST.length = 0;
	ST.elem = (int *)malloc(sizeof(int) * 12);
	int key = 21;
	int ret=0;
	freopen("data.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	while (scanf("%d", &ST.elem[ST.length + 1]) != -1) {
		printf("%d ", ST.elem[ST.length + 1]);
		ST.length++;
	}
	ret = BinarySearch(&ST, key);
	printf("\n关键字%d的位置为%d",key, ret);
	free(ST.elem);
	fclose(stdin);
	fclose(stdout);
	system("pause");
	return 1;
}