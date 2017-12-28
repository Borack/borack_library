#include <api.hpp>
#include <dlfcn.h>
#include <functional> // used for std::fucntion

#include <iostream>

int main(void)
{

    //float (*sum)(float, float);

    // NOte: Namespaces in the API are entirely ignored in the current setup!

    void *handle;
    std::function<float(float, float)> sum;
    std::function<double(float, double)> product;
    handle = dlopen("libBORACK_LIB.dylib", RTLD_LAZY);
    sum = reinterpret_cast<float (*)(float, float)>(dlsym(handle, "sumOfTwoNumbers"));
    product = reinterpret_cast<double (*)(float, double)>(dlsym(handle, "productOfTwoNumbers"));

    float result = sum(3.1f, 4.0f);
    double result2 = product(3.1f, 4.0f);
    //float result = API::sumOfTwoNumbers(3.1f, 4.0f);
    std::cout << result << std::endl;
    std::cout << result2 << std::endl;

    dlclose(handle);

    return 0;
}
