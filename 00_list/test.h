#include <stdio.h>
#include <stdlib.h>

#define Data int;


struct _Node{
	struct Node *prev;
	struct Node *next;
	Data data;
}Node;


