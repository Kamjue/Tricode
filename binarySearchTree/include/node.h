#ifndef NODE_H
#define NODE_H


///Clase node implementada. ¡NO LA MODIFIQUES!

template<class T>
class node
{
private:
	T data;
	node<T> *left_child;
	node<T> *right_child;
public:
	node()
	{
		this -> data = 0;
		this -> left_child = nullptr;
		this -> right_child = nullptr;
	}

	node(const T &d)
	{
		this -> data = d;
		this -> left_child = nullptr;
		this -> right_child = nullptr;
	}
	node(const node<T> &d)
	{
		this -> data = d.get_data();
		this -> left_child = d.get_left_child();
		this -> right_child = d.get_right_child();
	}

	~node()
	{
	}

	void set_data(const T& d)
	{
		this -> data = d;
	}

	void set_left_child(node<T> *l)
	{
		if(l -> get_data() < this -> data)
			this -> left_child = l;
	}
	
	void set_right_child(node<T> *r)
	{
		if(r -> get_data() > this -> data)
			this -> right_child = r;
	}

	node<T> *& get_left_child()
	{
		return this -> left_child;
	}

	node<T> *& get_right_child()
	{
		return this -> right_child;
	}

	T get_data()
	{
		return this -> data;
	}

};

#endif