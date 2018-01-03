#ifndef BORACK_API
#define BORACK_API
#include <vector>
namespace API
{

extern "C" {
float sumOfTwoNumbers(float a, float b);

namespace blub
{
double productOfTwoNumbers(float a, double b);

} // blub

namespace sorting
{
//template <typename T>
void sort(std::vector<double> &vector);
} // sorting

} // extern "C"
} // API
#endif // BORACK_API
