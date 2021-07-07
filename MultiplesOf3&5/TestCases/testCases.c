/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 
 Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

 Note: If the number is a multiple of both 3 and 5, only count it once. Also, if a number is negative, return 0(for languages that do have them)

 Courtesy of projecteuler.net
 ALGORITHMS MATHEMATICS NUMBERS

-------Test cases from code wars--------*/
#include <criterion/criterion.h>

int solution(int);

int _solution(int number) {
    int sum = 0;

    for (int i = 0 ; i < number ; ++i) {
        if (i%5 == 0 || i%3 == 0)
            sum += i;
    }

    return sum;
}

Test(should_handle_basic_test_cases, should_pass_all_the_tests_provided) {
    cr_assert_eq(solution(10), 23);
    cr_assert_eq(solution(20), 78);
    cr_assert_eq(solution(200), 9168);
}

Test(should_handle_the_smallest_cases, should_pass_all_the_tests_provided) {
    cr_assert_eq(solution(-1), 0);
    cr_assert_eq(solution(0), 0);
    cr_assert_eq(solution(1), 0);
    cr_assert_eq(solution(2), 0);
    cr_assert_eq(solution(3), 0);
    cr_assert_eq(solution(4), 3);
    cr_assert_eq(solution(5), 3);
    cr_assert_eq(solution(6), 8);
}

Test(should_handle_random_test_cases, should_pass_all_the_tests_provided) {
    for (int i = 0 ; i < 5 ; ++i) {
        int random = rand() % 100 + 1;
        cr_assert_eq(solution(random), _solution(random));
    }
}
