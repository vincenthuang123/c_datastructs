#ifndef DATASTRUCT_H
#define DATASTRUCT_H

//int should be a generic type, but c expects you to know what type you want
// Should make fields private, not global
// size_t len
// Function overloading
// Generics
// Define Macros
// length should be size and tail should be length

typedef struct vector{
  int length; 
  int tail;
  int*array;
} vector;

vector* vector_init();

vector* vector_sinit(int);

void vector_free(vector *);

int vector_at(vector *, int);

int vector_length();


#endif
