#include "printer.h"
#include <cstdlib>

using std::atoi;

int main (int argc, char *argv[]) {
  if(argc == 1) {
    print();
  } else if(argc == 2) {
    print(argv[1]);
  } else if(argc == 3) {
    int times = atoi(argv[2]);
    if(times < 1) {
      printIllegalArg();
    } else {
      print(argv[1], times);
    }
  } else {
    printTooManyArgs();
  }
}
