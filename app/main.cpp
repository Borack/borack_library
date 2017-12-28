#include <api.hpp>
#include <dlfcn.h>
#include <functional> // used for std::fucntion

#include <iostream>

int main(void)
{

    //float (*sum)(float, float);

    void *handle;
    std::function<float(float, float)> sum;
    handle = dlopen("libBORACK_LIB.dylib", RTLD_LAZY);
    sum = (float (*)(float, float))dlsym(handle, "sumOfTwoNumbers");

    float result = sum(3.1f, 4.0f);
    //float result = API::sumOfTwoNumbers(3.1f, 4.0f);

    std::cout << result << std::endl;

    return 0;
}
