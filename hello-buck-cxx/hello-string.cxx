#include "stdio.h"
#include "hello-string.h"

//
// HELLOSTRING is defined in .buckconfig
//
const char * hello_string::HELLO = HELLOSTRING;

hello_string::hello_string() {};

const char * hello_string::get_string() {

  return( HELLO );

}


// --- END ---

