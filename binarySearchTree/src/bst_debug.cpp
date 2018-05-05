#include <bst.h>

template <class T>
bst<T>::bst(node<T>* r) {
  this -> root = r;
  
  // Debug
  std::cout << "Root = " << this -> get_root() << '\n';
}

template <class T>
node<T>* bst<T>::find(node<T>* $root, const T& key) {
  const T nodeKey = $root -> get_data();

  // Debug
  std::cout << "\tfind($root = [" << $root << ", " << nodeKey << "], key = " << key << ")\n";

  if (key == nodeKey) {
    return $root;
  } else if (key < nodeKey) {
    node<T> *leftChild = $root -> get_left_child();

    // Debug
    std::cout << "\t\t" << key << " < " << nodeKey << " = key should be in the left sub-tree\n";

    if (leftChild == nullptr) {

      //Debug
      std::cout << "\t\tleft sub-tree -> root = null\n";

      return $root;
    } else {
      return find(leftChild, key);
    }
  } else if (key > nodeKey) {
    node<T> *rightChild = $root -> get_right_child();

    // Debug
    std::cout << "\t\t" << key << " > " << nodeKey << " = key should be in the right sub-tree\n";

    if (rightChild == nullptr) {
      
      //Debug
      std::cout << "\tright sub-tree -> root = null\n";

      return $root;
    } else {
      return find(rightChild, key);
    }
  }
}

template <class T>
bool bst<T>::insert(node<T>* n) {
  const T key = n -> get_data();

  // Debug
  std::cout << "insert([" << n << ", " << key << "])\n";

  node<T> *foundedNode = this -> find(this -> root, key);
  const T foundedKey = foundedNode -> get_data();
  
  // Debug
  std::cout << "\tfoundedNode = [" << foundedNode << ", " << foundedKey << "]\n";
  
  if (foundedKey == key) {

    // Debug
    std::cout << '\t' << foundedKey << " = " << key << "\n";

    return false;
  } else {

    // Debug
    std::cout << '\t' << foundedKey << " != " << key << "...\n";
    
    if (key < foundedKey) {
      
      // Debug
      std::cout << '\t' << key << " < " << foundedKey << " = foundedNode -> leftChild = [" << n << ", " << key << "]\n";
      
      foundedNode -> set_left_child(n);
    } else {
      
      // Debug
      std::cout << '\t' << key << " > " << foundedKey << " = foundedNode -> rightChild = [" << n << ", " << key << "]\n";
      
      foundedNode -> set_right_child(n);
    }
    return true;
  }
}

template <class T>
node<T>* bst<T>::search(const T& key) {
  // Debug
  std::cout << "search(" << key << ")\n";

  node<T> *foundedNode = this -> find(this -> root, key);


  if (foundedNode -> get_data() == key) {
  
    // Debug
    std::cout << "\tfoundedNode = [" << foundedNode << ", " << foundedNode -> get_data() << "]\n";
  
    return foundedNode;
  } else {
    return nullptr;
  }
}

template <class T>
void bst<T>::traverse(node<T>* n, std::vector<T>& v) {
  if (n) {
    v.push_back(n -> get_data());

    // Debug:
    std::cout << n -> get_data() << '\n';

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
