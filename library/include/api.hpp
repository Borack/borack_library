#ifndef BORACK_API
#define BORACK_API
#include <vector>
#include <memory>
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

namespace data_structures
{
template<typename T>
class BinaryTree
{
   class Pimpl;

public:
   explicit BinaryTree(std::vector<T> vals);

private:
   std::shared_ptr<Pimpl> m_pimpl;
};


class RedBlackTree
{
public:
   RedBlackTree();
};

}


} // API

#ifndef ALGOS_IMPL
#define ALGOS_IMPL
#include "../src/algorithms_data_structures.hpp"
#endif

#endif // BORACK_API
