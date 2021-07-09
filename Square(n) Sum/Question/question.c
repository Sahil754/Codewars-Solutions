/*Complete the square sum function so that it squares each number passed into it and then sums the results together.
 
 For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.
 
 FUNDAMENTALS ARITHMETIC MATHEMATICS ALGORITHMS NUMBERS ARRAYS LISTS DATA STRUCTURES*/

//Given Function:
#include <stddef.h>

int square_sum(const int *values, size_t count);

//Given Sample Test Cases
#include <criterion/criterion.h>
#include <stddef.h>

int square_sum(const int *values, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
  {
    const int values[0];
    int received = square_sum(values, 0);
    int expected = 0;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }

  {
    const int values[] = { 1, 2 };
    int received = square_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 5;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
  
  {
    const int values[] = { 0, 3, 4, 5 };
    int received = square_sum(values, sizeof(values)/sizeof(values[0]));
    int expected = 50;
    cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
  }
}
