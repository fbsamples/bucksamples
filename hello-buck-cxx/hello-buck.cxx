#include "stdio.h"
#include "hello-string.h"

int main () {

  hello_string * my_object = new hello_string();

  printf( "%ld\n", my_object -> get_count() );

  return ( my_object -> get_count() );

}

