#include "unity.h"
#include "function_Odd_or_Even.h"
//#include "file_to_test.h"

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

void test_Odd_or_Even_1_2_3_4_and_5_should_return_odd(void)
{
    int result = odd_or_even((int[]){1, 2, 3, 4, 5}, 5);
    TEST_ASSERT_EQUAL_STRING("odd", result);
}

void test_Odd_or_Even_1_2_3_4_5_and_5_should_return_even(void)
{
    int result = odd_or_even((int[]){1, 2, 3, 4, 5, 5}, 6);
    TEST_ASSERT_EQUAL_STRING("even", result);
}

void test_Odd_or_Even_empty_should_return_even(void)
{
    int result = odd_or_even((int[]){}, 0);
    TEST_ASSERT_EQUAL_STRING("even", result);
}

void test_array_overflow_should_return_even(void) // Массив преднамеренно сделан на один больше, чтобы отловить переполнение.
{
    int result = odd_or_even((int[]){1, 2, 3, 5}, 3);
    TEST_ASSERT_EQUAL_STRING("even", result);
}

// not needed when using generate_test_runner.rb
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Odd_or_Even_1_2_3_4_and_5_should_return_odd);
    RUN_TEST(test_Odd_or_Even_1_2_3_4_5_and_5_should_return_even);
    RUN_TEST(test_Odd_or_Even_empty_should_return_even);
    RUN_TEST(test_Odd_or_Even_1_2_3_and_5_should_return_even);
    return UNITY_END();
}
