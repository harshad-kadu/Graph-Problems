#include <iostream>
#include "node.h"

node::node () {
	data = id++;
}

void node::append(node* newNode) {
	edge* nodeEdge = (edge*) malloc (sizeof(edge));
	nodeEdge->nodeptr = newNode;
	nodeEdge->cost = rand() % 5;
	edgeList.push_back(*nodeEdge);
}

void node::printList () {
	for (std::list<edge>::iterator it=edgeList.begin(); it != edgeList.end(); ++it)
		std::cout << it->nodeptr->data << '\t';
	std::cout << "EOL";
}