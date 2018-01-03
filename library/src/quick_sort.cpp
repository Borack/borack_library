#include <api.hpp>

namespace API
{
namespace sorting
{
size_t partition(std::vector<double> &A, size_t lo, size_t hi)
{
    auto pivot = A[lo];
    int i = lo - 1;
    int j = hi + 1;
    while (true)
    {
        do
        {
            i = i + 1;
        } while (A[i] < pivot);
        do
        {
            j = j - 1;
        } while (A[j] > pivot);
        if (i >= j)
            return j;
        std::swap(A[i], A[j]);
    }
}
void quicksort(std::vector<double> &A, size_t lo, size_t hi)
{
    if (lo < hi)
    {
        auto p = partition(A, lo, hi);
        quicksort(A, lo, p);
        quicksort(A, p + 1, hi);
    }
}
void sort(std::vector<double> &vec)
{
    quicksort(vec, 0, vec.size() - 1);
}
}
}
