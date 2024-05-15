#include <time.h>
#include "set.h"

int main() {
	srand(time(NULL));
	set_t *s1 = new_set();
	set_t *s2 = new_set();
	getchar();
	
	do {
		short select;
		printf("\n1: Insert in set 1\n");
		printf("2: Remove from set 1\n");
		printf("3: Finish\n");
		scanf("%1hd", &select);
		getchar();

		if (select == 1) {
			int element;
			printf("\nEnter with the value to put on set 1: ");
			scanf("%d", &element);
			getchar();
			insert_in_set(s1, element);
			printf("Set: ");
			print_set(s1);
		} else if (select == 2) {

		} else {
			break;
		}
	} while (1);

	do {
		short select;
		printf("\n1: Insert in set 2\n");
		printf("2: Remove from set 2\n");
		printf("3: Finish\n");
		scanf("%1hd", &select);
		getchar();

		if (select == 1) {
			int element;
			printf("\nEnter with the value to put on set 2: ");
			scanf("%d", &element);
			getchar();
			insert_in_set(s2, element);
			printf("Set: ");
			print_set(s2);
		} else if (select == 2) {
			
		} else {
			break;
		}
	} while (1);

	free_set(s1);
	free_set(s2);

	return 0;
}
