#include <stdio.h>
#include <stdlib.h>
#include "seqList.h"

seqlist* create_seqlist(void)
{
	seqlist* L = NULL;
	L = (seqlist *)malloc(sizeof(seqlist));
	if (L == NULL) {
		puts("memory malloc failure");
		return NULL;
	}
	L->last = -1;
	puts("create success");
	return L;
}
void clear_seqlist(seqlist* L)
{
	if (L == NULL) {
		puts("seqlist is not exist");
		return;
	}
	free(L);
	L = NULL;
	puts("clear success");
	return;
}
int is_empty_seqlist(seqlist* L)
{
	if (L == NULL) {
		puts("seqlist is not exist");
		return -1;
	}
	return (L->last == -1);
}
int is_full_seqlist(seqlist* L)
{
	if (L == NULL) {
		puts("seqlist is not exist");
		return -1;
	}
	return (L->last == MAXSIZE - 1);
}
void set_empty_seqlist(seqlist* L)
{
	if (L == NULL) {
		puts("seqlist is null");
		return;
	}
	L->last = -1;
	return;
}
int get_length_seqlist(seqlist* L)
{
	if (L == NULL) {
		puts("seqlist is null");
		return -1;
	}
	return(L->last + 1);
}
void show_seqlist(seqlist* L)
{
	if (L == NULL) {
		puts("seqlist is null");
		return;
	}
	else if (is_empty_seqlist(L)) {
		puts("seqlist is empty");
		return;
	}
	for (int i = 0; i <= L->last; i++) {
		printf("L->data[%d] = %d\n", i, L->data[i]);
	}
	return;
}
int insert_seqlist(seqlist* L, dataType x, int area)
{
	if (is_full_seqlist(L)) {
		puts("seqlist is full");
		return -1;
	}else if ((area < 0) || (area > (L->last + 1))) {
		puts("insert area illegal");
		return -1;
	}
	for (int i = L->last; i >= area; i--) {
		L->data[i + 1] = L->data[i];
	}
	L->data[area] = x;
	L->last++;
	puts("insert success");
	return 0;
}
int delete_seqlist(seqlist* L, int area)
{
	if (L == NULL) {
		puts("seqlist is empty");
		return -1;
		
	}else if (area < 0 || area > (L->last)) {
		puts("delete area illegal");
		return -1;
	}
	for (int i = area; i <= L->last - 1; i++) {
		L->data[i] = L->data[i + 1];
	}
	L->last--;
	puts("delete success");
	return 0;
}
int change_seqlist(seqlist* L, dataType x, int area)
{
	if (L == NULL) {
		puts("seqlist is empty");
		return -1;
	}
	else if (area < 0 || area > (L->last)) {
		puts("change area illegal");
		return -1;
	}
	L->data[area] = x;
	puts("change success");
	return 0;
}
int search_seqlist(seqlist* L, dataType x)
{
	for (int i = 0; i <= (L->last); i++) {
		if (L->data[i] == x) {
			puts("search success");
			return i;
		}
	}
	puts("can not find target");
	return -1;
}