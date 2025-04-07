#include "CUTE/cute/cute.h"
#include "CUTE/cute/cute_runner.h"
#include "CUTE/cute/ide_listener.h"
#include "Polikarpov_MathTask.h"

using namespace cute;

void testCalcRectangleArea() {
    int a = 3, b = 5;
    int expected = 15;
    int actual = CalcRectangleArea(a, b);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;
    s.push_back(CUTE(testCalcRectangleArea));
    ide_listener<> listener;
    makeRunner(listener)(s, "First Test");
    return 0;
}
