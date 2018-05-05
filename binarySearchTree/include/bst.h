#ifndef BST
#define BST

# include <node.h>
# include <iostream>
# include <vector>

template <class T>
class bst
{
  private:
    node<T>* root;
    node<T>* find(node<T>*, const T&);
    void traverse(node<T>*, std::vector<T>&);
  public:
    bst(node<T>*);
    bool insert(node<T>*);
    node<T>* search(const T&);
    std::vector<T> prefix_traversal();

    node<T>* get_root() const;
    void set_root(node<T>*);
};

//#include <bst.cpp>

#endif
