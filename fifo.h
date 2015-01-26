#ifndef FIFO_H
#define FIFO_H

#include <stdint.h>

struct _fifo_node_t;

typedef struct {
  size_t S;
  size_t W;
  int64_t P;
  int64_t C;
  struct _fifo_node_t * T;
} fifo_t;

typedef struct {
  struct _fifo_node_t * P;
  struct _fifo_node_t * C;
} fifo_handle_t;

void fifo_init(fifo_t * fifo, size_t size, size_t width);
void fifo_register(const fifo_t * fifo, fifo_handle_t * handle);
void * fifo_get(fifo_t * fifo, fifo_handle_t * handle);
void fifo_put(fifo_t * fifo, fifo_handle_t * handle, void * data);

#endif /* end of include guard: FIFO_H */
