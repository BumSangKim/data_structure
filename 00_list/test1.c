#include <test.h>

int main() {
	List L;
	init_list(&L);

	add_list(5, &L);
	add_list(5, &L);
	add_list(5, &L);
	delete_list(&L);
	return 0;
}
