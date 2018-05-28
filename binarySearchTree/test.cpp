# include <bst.h>
# include "../src/bst.cpp"
# include <iostream>
# include <stdexcept>
# include <algorithm>

///Test: No lo modifiques

int main()
{
	
	node<int> a(5), b(4), c(3), d(8), e(10);
	bst<int> tree(&a);

	if(tree.get_root() -> get_data() != 5)
		throw std::logic_error("Root value should be 5!");

	if (not tree.insert(&b))
		throw std::logic_error("B should be inserted!");
	
	if (tree.insert(&b))
		throw std::logic_error("B is duplicated!");

	if (not tree.insert(&c))
		throw std::logic_error("C should be inserted!");

	if(not tree.insert(&d))
		throw std::logic_error("D should be inserted!");

	if(not tree.insert(&e))
		throw std::logic_error("E should be inserted!");


	if(tree.search(25) != nullptr)
		throw std::logic_error("25 should not be inside the tree!");

	if(tree.search(3) == nullptr)
		throw std::logic_error("This should not happen!");

	auto v =tree.prefix_traversal();
	int vec[] = {5, 4, 3, 8, 10};
	std::vector<int> test (vec, vec + sizeof(vec) / sizeof(int) );
	
	if(not std::equal(v.begin(), v.end(), test.begin(), test.end()))
		throw std::logic_error("Your traversal is wrong!");

	std::cout << "This is a potential 20 pts! You can send your code now!" << std::endl;

	return 0;
}