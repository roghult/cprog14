#include <iostream>
#include <string>
#include "printer.h"

using std::string;
using std::cout;
using std::cerr;

void print() {
  cout << "Hello, world!";
}

void print(string text) {
  cout << "Hello, " + text + "!";
}

void print(string text, int times) {
  string fullText = "Hello, ";
  for(int i = 0; i < times; i++) {
    fullText += text + " ";
  }
  // remove last space
  fullText = fullText.substr(0, fullText.size()-1);
  fullText += "!";
  cout << fullText;
}

void printIllegalArg() {
  cerr << "error: 2nd argument must be an integral greater than zero!";
}

void printTooManyArgs() {
  cerr << "error: Too many arguments!";
}