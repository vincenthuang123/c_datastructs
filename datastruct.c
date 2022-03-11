#include "datastruct.h"
#include "stdlib.h"

void test(){
  printf("printing test\n");
}

// uninitialized variables in vector array
vector* vector_init(){
  vector* out = (vector *) malloc(sizeof(vector));
  out->length = 10;
  out->array = (void *) malloc(10 * sizeof(int));
  return out;
}

void vector_free(vector *v){
  free(v->array);
  free(v);
  v = NULL;
}

int vector_length(vector *v){
  return v->length;
}


