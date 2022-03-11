#include <stdio.h>
#include "datastruct.c"

// Could use local structs but cannot pass them or leave main
// doesn't work with pthreads
int main(){
  printf("Hello World\n");
  test();
  vector v;
  v.length = 1;
  printf("%d\n",v.length);
  printf("%d\n",vector_length(&v));
  vector *test = vector_init(); 
  //vector *test = vector_sinit(-1); 
  if (test == NULL) vector_free(test);
  for (int i = 0; i < 100; i++){
    vector_append(test, i);
    printf("%d ", vector_at(test, i));
  }
  printf("\n");
  printf("size of vector : %d\n", vector_length(test));
  //int x = vector_at(test, vector_length(test));
  //int x = vector_at(test, 1000000);
}


