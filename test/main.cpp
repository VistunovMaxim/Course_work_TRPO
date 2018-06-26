#define CTEST_MAIN

#include "test_main.hpp"
#include "ctest.h"

CTEST(check, abroad){
    
    bool correct;
    const int one = 11;
    correct = check(one);
    ASSERT_TRUE(correct);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
