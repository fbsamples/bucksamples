#ifdef  BUCKSTRING
#define HELLOSTRING "Buck"
#else
#define HELLOSTRING "Zuck"
#endif

#include "stdio.h"
#include "hello-string.h"

const char * hello_string::HELLO = HELLOSTRING;

hello_string::hello_string() {};

const char * hello_string::get_string() {

  return( HELLO );

}


// --- END ---

