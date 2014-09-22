#include <iostream>
#include "graph.h"

void graph::init (int num) {
	int ix, iy;
	adjMatrix = new int* [num];
	num_nodes = num;

	// Fill up the adjacency matrix
	for (ix = 0; ix < num; ix++) {
		adjMatrix[ix] = new int [num];
		for (iy = 0; iy < num; iy++) {
			adjMatrix[ix][iy] = rand () % 2;
			std::cout << adjMatrix[ix][iy] << "\t";
		}
		std::cout<<std::endl;
	}
	std::cout << std::endl;

	adjList = new node* [num_nodes];
	for (ix = 0; ix < num_nodes; ix++) {
		adjList[ix] = new node;
	}

	// Fill up the adjacency list using the matrix above
	for (ix = 0; ix < num_nodes; ix++) {
		for (iy = 0; iy < num_nodes; iy++) {
			if (adjMatrix[ix][iy] != 0) {
				adjList[ix]->append(adjList[iy]);
			}
		}
	}
}


void graph::printGraph () {
	int ix;
	// Print out the adjacency list
	for (ix = 0; ix < num_nodes; ix++) {
		adjList[ix]->printList ();
		std::cout << std::endl;
	}
	std::cout<< std::endl;
}

void graph::DFS(int start) {
	std::list <node*> stack;
	stack.push_back(adjList[start]);
	bool *visited = new bool [num_nodes];
	int iter;

	for (iter=0; iter<num_nodes; iter++)
		visited[iter] = false;

	while (!stack.empty()) {
		node* graphNode = stack.back();
		stack.pop_back();

		if (visited[graphNode->data] == true)
			continue;

		for (std::list<edge>::iterator it=graphNode->edgeList.begin(); it != graphNode->edgeList.end(); ++it) 
			stack.push_back(it->nodeptr);

		std::cout << graphNode->data <<std::endl;
		visited[graphNode->data] = true;
	}
	std::cout<<std::endl;
}