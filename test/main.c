#define CTEST_MAIN

#include "check.h"
#include "ctest.h"

CTEST(check, abroad) {
    printf("Test abroad started");
    int correct;
    const int one = 11;
    int exp = 0;
    correct = check(one, 100);
    ASSERT_EQUAL(exp, correct);
}

CTEST(check, otrAbroad) {
    printf("Test otrAbroad started");
    int correct;
    const int one = -1;
    int exp = 0;
    correct = check(one, 100);
    ASSERT_EQUAL(exp, correct);
}

CTEST(check, normAbroad) {
    printf("Test otrAbroad started");
    int correct;
    const int one = 5;
    int exp = 1;
    correct = check(one, 100);
    ASSERT_EQUAL(exp, correct);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
