struct atomic_fifo_node {
        void *data;
        struct atomic_fifo_node *next;
};

struct atomic_fifo {
	struct atomic_fifo_node *tail, *head;
};

struct atomic_fifo * atomic_fifo_init (void);

void atomic_fifo_push (struct atomic_fifo *, void *);

void * atomic_fifo_pop (struct atomic_fifo *);
