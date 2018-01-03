#include <algorithm>
#include <api.hpp>
#include <chrono>
#include <dlfcn.h> // required for dynamically loading the shared libraries
#include <functional> // used for std::fucntion

#include <iostream>

int main(void)
{

    //float (*sum)(float, float);

    // NOte: Namespaces in the API are entirely ignored in the current setup!

    void *handle;
    std::function<float(float, float)> sum;
    std::function<double(float, double)> product;
    handle = dlopen("libCALCULATOR.dylib", RTLD_LAZY);
    sum = reinterpret_cast<float (*)(float, float)>(dlsym(handle, "sumOfTwoNumbers"));
    product = reinterpret_cast<double (*)(float, double)>(dlsym(handle, "productOfTwoNumbers"));

    float result = sum(3.1f, 4.0f);
    //double result2 = product(3.1f, 4.0f);
    //float result = API::sumOfTwoNumbers(3.1f, 4.0f);
    std::cout << result << std::endl;
    //std::cout << result2 << std::endl;
    dlclose(handle);

    using type = double;
    const size_t nElements = 10000;
    std::srand(0); // set seed
    std::vector<type> toBeSorted(nElements);
    std::generate(toBeSorted.begin(), toBeSorted.end(), std::rand);

    {
        std::function<void(std::vector<double> &)> sort;
        handle = dlopen("libINSERTION_SORT.dylib", RTLD_LAZY);
        sort = reinterpret_cast<void (*)(std::vector<double> &)>(dlsym(handle, "sort"));

        std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
        sort(toBeSorted);
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
        std::cout << "Sorting took "
                  << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
                  << "us.\n";

        dlclose(handle);
    }
    return 0;
}
