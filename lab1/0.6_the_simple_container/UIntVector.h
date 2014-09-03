#include <cstddef>
#include <initializer_list>

using std::size_t;
using std::initializer_list;

class UIntVector
{
  private:
    size_t vecSize;
    UIntVector();
  public:
    UIntVector(size_t size);
    UIntVector(UIntVector const& src);
    UIntVector(initializer_list<int> list);
    UIntVector& operator= (UIntVector const& src);
    int& operator[] (int i);

    void reset();
    size_t size();
};