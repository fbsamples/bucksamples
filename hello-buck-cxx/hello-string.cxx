#include "stdio.h"
#include "hello-string.h"

//
// HELLOSTRING is defined in .buckconfig
//
const std::string hello_string::HELLO = HELLOSTRING;

hello_string::hello_string() {};

const std::string hello_string::get_string() {

  return( HELLO );

}


// --- END ---

