#include <iostream>
#include "hello-string.h"

int main () {

  hello_string * hello = new hello_string();

  std::cout << "Hello, " << hello -> get_string() << std::endl;

  return( 0 );

}

