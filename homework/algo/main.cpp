#include <iostream>
#include "include/logic.h"
#include <gtest/gtest.h>

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    int x(RUN_ALL_TESTS());
    if(x > 0)
    {
        std::cout << "tests Failed" << std::endl;
        return x;
    }
    std::cout << "Passed" << std::endl;
}
