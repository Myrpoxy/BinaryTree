#include <iostream>
using namespace std;


class BinaryTree
{
public:
	BinaryTree() = default;
	BinaryTree(int data) { root = new Node(data); }

private:
	class Node
	{
	public:
		Node(int data) : data{ data }, left{ nullptr }, right{ nullptr } {}
		Node* left;
		Node* right;
		int data;
	};
	Node* root;
};


int main()
{
	setlocale(LC_ALL, "ru");
	


	return 0;
}