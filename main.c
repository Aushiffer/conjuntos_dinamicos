#include <stdio.h>
#include <time.h>
#include "set.h"

int main() {
	srand(time(NULL));
	set_t *s1 = new_set();
	set_t *s2 = new_set();
	printf("\n=============== SET 1 ===============\n");

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
			int element;
			printf("\nEnter with the value to remove from set 1: ");
			scanf("%d", &element);
			getchar();
			remove_from_set(s1, element);
			printf("Set: ");
			print_set(s1);
		} else if (select == 3) {
			break;
		} else {
			printf("[-] Invalid option\n");
		}
	} while (1);

	printf("\n=============== SET 2 ===============\n");

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
			int element;
			printf("\nEnter with the value to remove from set 2: ");
			scanf("%d", &element);
			getchar();
			remove_from_set(s2, element);
			printf("Set: ");
			print_set(s2);
		} else if (select == 3) {
			break;
		} else {
			printf("[-] Invalid option\n");
		}
	} while (1);

	printf("Create a union between the sets? (y for yes): ");
	char do_union;
	scanf("%c", &do_union);
	getchar();

	switch (do_union) {
		case 'y':

		if (1) {
			set_t *uni = unite(s1, s2);
			printf("\nUnion: ");
			print_set(uni);
			free_set(uni);
		}

		break;
	}

	printf("Create a intersection between the sets? (y for yes): ");
	char do_intersct;
	scanf("%c", &do_intersct);
	getchar();

	switch (do_intersct) {
		case 'y':

		if (1) {
			set_t *intersct = intersect(s1, s2);
			printf("\nIntersection: ");
			print_set(intersct);
			free_set(intersct);
		}

		break;
	}

	free_set(s1);
	free_set(s2);

	return 0;
}
