#include <api.hpp>

namespace API
{
namespace sorting
{
void sort(std::vector<double> &vec)
{
    // insertion sort
    size_t i = 1;
    while (i < vec.size())
    {
        size_t j = i;
        while (j > 0 && (vec[j - 1] > vec[j]))
        {
            std::swap(vec[j], vec[j - 1]);
            j = j - 1;
        }
        i++;
    }
}
}
}
