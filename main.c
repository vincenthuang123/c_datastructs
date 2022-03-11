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
  vector_free(test);
}


