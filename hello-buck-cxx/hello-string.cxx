#include "stdio.h"
#include "hello-string.h"


const char * hello_string::HELLO = "Buck";

hello_string::hello_string() {

  count = 1;

}

long hello_string::get_count() {

  return( count );

}

const char * hello_string::get_string() {

  return( HELLO );

}


// --- END ---

