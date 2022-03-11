#include "datastruct.h"
#include "stdlib.h"

// No bound checking, for speed reasons

// uninitialized variables in vector array
vector* vector_init(){
  vector* out = (vector *) malloc(sizeof(vector));
  out->length = 10;
  out->tail = 0;
  out->array = (void *) malloc(10 * sizeof(int));
  return out;
}

vector* vector_sinit(int size){
  if(size <= 0) {
    return NULL;
  }
  vector* out = (vector *) malloc(sizeof(vector));
  out->length = size;
  out->tail = 0;
  out->array = (void *) malloc(size * sizeof(int));
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

int vector_at(vector *v, int i){
  //if (i >= v->length){
    //return -1
  //}
  return v->array[i];
}

void vector_double(vector *v) {
  int *tmp = (int *) malloc(v->length * sizeof(int));
  for (int i = 0; i < v->length; i++){
    tmp[i] = v->array[i];
  }
  free(v->array);
  v->array = tmp;
  v->length *= 2;
}

void vector_append(vector *v, int elem){
  if (v->tail == v->length) {
    vector_double(v);
  }
  v->array[v->tail++] = elem;
}


