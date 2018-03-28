#include "stdio.h"
#include "hello-string.h"

int main () {

  hello_string * hello = new hello_string();

  printf( "Hello, %s\n", hello -> get_string() );

  return( 0 );

}

