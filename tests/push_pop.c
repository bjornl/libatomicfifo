/*
 * Push 10000 messages on the queue and pop them off the queue.
 */

#include <stdio.h>
#include <string.h>
#include <atomicfifo.h>

int
main()
{
	struct atomic_fifo *myqueue = NULL;
	char buf[256], *str;
	int i;

	myqueue = atomic_fifo_init();

	for (i = 1 ; i < 10001 ; i++) {
		sprintf(buf, "This is item no %d", i);
		str = strdup(buf);
		atomic_fifo_push(myqueue, str);
	}

	while ((str = atomic_fifo_pop(myqueue)) != NULL) {
		printf("%s\n", (char *) str);
	}

	return 0;
}
