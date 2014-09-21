#include <stdio.h>
#include <stdlib.h>
#include <list>

static int n_id = 0;
class node {

// Variables
private:
	int data;

	struct edge {
		int cost;
		struct node* nodeptr;
	};
	std::list <edge> edgeList;

// Functions
public:
	node ();
	void append(node* newNode);
	void printList ();
};