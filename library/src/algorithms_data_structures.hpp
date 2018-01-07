#include <api.hpp>

namespace API
{
namespace data_structures
{
RedBlackTree::RedBlackTree()
{

}

namespace
{
   class Pimpl
   {

   };
}

template<typename T>
BinaryTree<T>::BinaryTree(std::vector<T> vals)
{
   m_pimpl.reset();
   data_structures::Pimpl a;
}

} // data_structures
} // API
