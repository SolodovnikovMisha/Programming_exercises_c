#include "mock_my_sqrt.h"
#include "src/pifagor.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






void setUp(void)

{

}



void tearDown(void)

{

}



void test_pifagor_3_and_4_should_return_5(void) {

    my_sqrt_CMockExpectAndReturn(16, 25, 5);



    double result = pifagor(3.0, 4.0);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((5.0)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((5.0))), (UNITY_FLOAT)((UNITY_FLOAT)((result))), ((

   ((void *)0)

   )), (UNITY_UINT)((UNITY_UINT)(19)));

}
