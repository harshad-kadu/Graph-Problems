#include <iostream>
#include "node.h"

node::node () {
	n_id++;
	data = n_id; 
}

void node::append(node* newNode) {
	edge nodeEdge;
	nodeEdge.nodeptr = newNode;
	nodeEdge.cost = rand() % 5;
	edgeList.push_back(nodeEdge);
}

void node::printList () {
	for (std::list<edge>::iterator it=edgeList.begin(); it != edgeList.end(); ++it)
		std::cout << it->nodeptr->data << '\t';
	std::cout << "EOL";
}