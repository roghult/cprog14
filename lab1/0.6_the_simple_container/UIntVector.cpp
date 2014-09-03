#include <initializer_list>
#include "UIntVector.h"

using std::initializer_list;

int *firstElem;
int *lastElem;

UIntVector::UIntVector(size_t size) {
  this->vecSize = size;
  firstElem = new int[size];
  lastElem = firstElem + size;
  reset();
}

UIntVector::UIntVector(UIntVector const& src) {

}

UIntVector::UIntVector(initializer_list<int> list) {

}

UIntVector& UIntVector::operator= (UIntVector const& src) {

}

int& UIntVector::operator[] (int i) {

}

void UIntVector::reset() {
  int i = 0;
  int *elem = firstElem;
  while(elem != lastElem) {
    *elem = i;
    ++elem;
  }
}

size_t UIntVector::size() {

}