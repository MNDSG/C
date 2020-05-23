#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#define MAXSIZE 100//顺序表大小
typedef int dataType;//表存储类型重定义
typedef struct {
	dataType data[MAXSIZE];
	int last;
}seqlist;

seqlist *create_seqlist(void);
void clear_seqlist(seqlist *L);
int is_empty_seqlist(seqlist *L);
int is_full_seqlist(seqlist *L);
void set_empty_seqlist(seqlist *L);
int get_length_seqlist(seqlist *L);
void show_seqlist(seqlist *L);

int insert_seqlist(seqlist *L, dataType x, int area);
int delete_seqlist(seqlist *L, int area);
int change_seqlist(seqlist *L, dataType x, int area);
int search_seqlist(seqlist *L, dataType x);
#endif