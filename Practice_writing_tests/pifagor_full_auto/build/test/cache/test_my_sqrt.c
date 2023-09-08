#include "src/my_sqrt.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_my_sqrt_25_should_return_5(void)

{

    double result = my_sqrt(25.0);

    UnityAssertFloatsWithin((UNITY_FLOAT)((UNITY_FLOAT)((5.0)) * (UNITY_FLOAT)(0.00001f)), (UNITY_FLOAT)((UNITY_FLOAT)((5.0))), (UNITY_FLOAT)((UNITY_FLOAT)((result))), ((

   ((void *)0)

   )), (UNITY_UINT)((UNITY_UINT)(18)));

}
