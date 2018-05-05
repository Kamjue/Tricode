#include <bst.h>

template <class T>
bst<T>::bst(node<T>* r) {
  this -> root = r;
}

template <class T>
node<T>* bst<T>::find(node<T>* $root, const T& key) {
  const T nodeKey = $root -> get_data();
  if (key == nodeKey) {
    return $root;
  } else if (key < nodeKey) {
    node<T> *leftChild = $root -> get_left_child();
    if (leftChild == nullptr) {
      return $root;
    } else {
      return find(leftChild, key);
    }
  } else if (key > nodeKey) {
    node<T> *rightChild = $root -> get_right_child();
    if (rightChild == nullptr) {
      return $root;
    } else {
      return find(rightChild, key);
    }
  }
}

template <class T>
bool bst<T>::insert(node<T>* n) {
  const T key = n -> get_data();
  node<T> *foundedNode = this -> find(this -> root, key);
  const T foundedKey = foundedNode -> get_data();
  if (foundedKey == key) {
    return false;
  } else {
    if (key < foundedKey) {
      foundedNode -> set_left_child(n);
    } else {
      foundedNode -> set_right_child(n);
    }
    return true;
  }
}

template <class T>
node<T>* bst<T>::search(const T& key) {
  node<T> *foundedNode = this -> find(this -> root, key);
  if (foundedNode -> get_data() == key) {
    return foundedNode;
  } else {
    return nullptr;
  }
}

template <class T>
void bst<T>::traverse(node<T>* n, std::vector<T>& v) {
  if (n) {
    v.push_back(n -> get_data());
    this -> traverse(n -> get_left_child(), v);
    this -> traverse(n -> get_right_child(), v);
  }
}

template <class T>
std::vector<T> bst<T>::prefix_traversal() {
  std::vector<T> traversedTree;
  this -> traverse(this -> get_root(), traversedTree);
  return traversedTree;
}

template <class T>
node<T>* bst<T>::get_root() const {
  return this -> root;
}

template <class T>
void bst<T>::set_root(node<T>* r) {
  this -> root = r;
}
