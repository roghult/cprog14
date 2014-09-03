#include <cxxtest/TestSuite.h>

#include "count_if_followed_by.h"


class MyTestSuite : public CxxTest::TestSuite {
  public:
    void test1 () {
      char const  data[6] = {'G','G','X','G','X','G'};
      int  const test_len = 4;

      int  const   result = count_if_followed_by (data, test_len, 'X', 'G');

      // SYNOPSIS:
      //   result should be 1 since the length specified is 4,
      //   and only one pair of [X, G] is present in that range!

      TS_ASSERT_EQUALS(result, 1);
    }

    void test_own_1( void )
    {
            char vek2[] = {'a', 'a', 'l', 'e', 'x', 'a', 'a'};
            int result = count_if_followed_by(vek2, 6, 'a', 'a');
            TS_ASSERT_EQUALS( result, 1);
            // fails since function is off by one.
    }

    void test_own_2(void)
    {
            char vek3[] = {'b', 'b', 'a', 'b', 'b'};
            int result = count_if_followed_by(vek3, 4, 'a', 'b');
            TS_ASSERT_EQUALS( result, 1);
    }

    void test_own_3(void)
    {
            char vek4[] = {'h', 'o', 'h', 'o', 'h', 'o', 'h', 'o', 'h', 'o', 'h', 'o'};
            int result = count_if_followed_by(vek4, 8, 'h', 'o');
            TS_ASSERT_EQUALS( result, 4);
    }
};
