#include "hello-lib.h"

#include <string>

using std::string;

/**
 * This prints "Hello world". If it is run with arguments, it will use the first
 * argument instead of "world". Build and run //examples/cpp:hello-world to see
 * this program in action.
 *
 * This file does double-duty as a "test." It is a cc_binary, so it can also be
 * compiled as a cc_test and Bazel will decide on whether it passed or failed
 * based on exit code (which is always 0 here, so the test "passes"). See
 * hello-fail.cc for an example of making a test fail.
 */
int main(int argc, char** argv) {
  unsigned int magic_number = get_magic_number();
  wprintf(L"Magic number received from middle is %d.\n", magic_number);

  return 0;
}
