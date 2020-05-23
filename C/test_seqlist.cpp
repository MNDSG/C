#include <stdio.h>
#include <stdlib.h>
#include "seqList.h"

int main(int argc, const char* argv[])
{
	seqlist* L = NULL;
	L = create_seqlist();
	for (int i = 0; i <= 5; i++) {
		insert_seqlist(L, i, 0);
	}
	puts("==================================");
	puts("length test");
	printf("seqlist length is %d\n", get_length_seqlist(L));
	show_seqlist(L);
	printf("%d\n", L->last);
	puts("==================================");
	puts("insert test");
	insert_seqlist(L, 99, 6);
	printf("seqlist length is %d\n", get_length_seqlist(L));
	show_seqlist(L);
	printf("%d\n", L->last);
	puts("==================================");
	puts("delete test");
	delete_seqlist(L, 6);
	show_seqlist(L);
	printf("%d\n", L->last);
	puts("==================================");
	puts("change test");
	change_seqlist(L, 88, 5);
	show_seqlist(L);
	printf("%d\n", L->last);
	puts("==================================");
	puts("search test");
	printf("%d\n", search_seqlist(L, 5));
	show_seqlist(L);
	printf("%d\n", L->last);
	puts("==================================");
	clear_seqlist(L);
	return 0;
}