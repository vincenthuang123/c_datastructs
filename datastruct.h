#ifndef DATASTRUCT_H
#define DATASTRUCT_H

//int should be a generic type, but c expects you to know what type you want

typedef struct vector{
  int length; 
  int*array;
} vector;

vector* vector_init();

void vector_free(vector *);

int vector_length();


#endif
