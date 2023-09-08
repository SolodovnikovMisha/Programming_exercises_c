#include "unity.h"
#include "dominator.h"

//#include "file_to_test.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_dominator_2_2_3_4_2_3_2_and_2_should_return_2(void)
 {
    const int array[8] = {2, 2, 3, 4, 2, 3, 2, 2};
    int result = dominator(array, 8);
    TEST_ASSERT_EQUAL_INT(2, result);
}

void test_dominator_2_2_3_4_2_3_2_and_4_should_return_minus1(void)
 {
    const int array[8] = {2, 2, 3, 4, 2, 3, 2, 4};
    int result = dominator(array, 8);
    TEST_ASSERT_EQUAL_INT(-1, result);
}

void test_dominator_1_2_3_4_and_5_should_return_minus1(void)
 {
    const int array[5] = {1, 2, 3, 4, 5};
    int result = dominator(array, 5);
    TEST_ASSERT_EQUAL_INT(-1, result);
}


void test_dominator_1_1_1_2_2_2_and_2_should_return_2(void)
 {
    const int array[7] = {1, 1, 1, 2, 2, 2, 2};
    int result = dominator(array, 7);
    TEST_ASSERT_EQUAL_INT(2, result);
}

void test_dominator_2_2_2_1_1_1_and_2_should_return_minus1(void)
 {
    const int array[7] = {2, 2, 2, 1, 1, 1, 2};
    int result = dominator(array, 6);
    TEST_ASSERT_EQUAL_INT(-1, result);
}

// not needed when using generate_test_runner.rb
int main(void)
 {
    UNITY_BEGIN();
    RUN_TEST(test_dominator_2_2_3_4_2_3_2_and_2_should_return_2);
    RUN_TEST(test_dominator_2_2_3_4_2_3_2_and_4_should_return_minus1);
    RUN_TEST(test_dominator_1_2_3_4_and_5_should_return_minus1);
    RUN_TEST(test_dominator_1_1_1_2_2_2_and_2_should_return_2);
    RUN_TEST(test_dominator_2_2_2_1_1_1_and_2_should_return_minus1);
    return UNITY_END();
}
