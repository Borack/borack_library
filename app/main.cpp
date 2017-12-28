#include <api.hpp>

#include <iostream>

int main(void)
{
    float result = API::sumOfTwoNumbers(3.1f, 4.0f);

    std::cout << result << std::endl;

    return 0;
}
