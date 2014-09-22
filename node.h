#include <stdio.h>
#include <stdlib.h>
#include <list>

static int id = 0;
struct edge;

class node {
private:
	int data;
	std::list <edge> edgeList;

public:
	node ();
	void append(node* newNode);
	void printList ();

	friend class graph;
};

struct edge {
	int cost;
	node* nodeptr;
};