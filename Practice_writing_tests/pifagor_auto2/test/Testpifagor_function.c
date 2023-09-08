#include "unity.h"
#include "Mocksqrt.h"
#include "pifagor_function.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_pifagor_3_and_4_should_return_5(void)
{
    my_sqrt_ExpectAndReturn(25.0, 5.0);
    double result = pifagor(3.0, 4.0);
    TEST_ASSERT_EQUAL_FLOAT(5.0, result);
}

