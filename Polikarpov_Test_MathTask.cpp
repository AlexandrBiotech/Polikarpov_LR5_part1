#include "CUTE/cute.h"
#include "CUTE/cute_runner.h"
#include "Polikarpov_MathTask.h"

using namespace cute;

void testCalcRectangleArea() {
    int a = 3, b = 5;
    int expected = 15;
    int actual = CalRectangleArea(a, b);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;
    s.push_back(CUTE(testCalcRectangleArea));
    ide_listener<> lis;
    makeRunner(lis)(s, "First Test");
    return 0;
}