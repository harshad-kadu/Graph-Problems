#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "node.h"
#define NUMNODES 5

using namespace std;

int main () {
	int adjMatrix [NUMNODES][NUMNODES];
	int ix, iy, ilist;

	node* adjList[NUMNODES];
	for (ix = 0; ix < NUMNODES; ix++) {
		adjList[ix] = new node;
	}

	// Fill up the adjacency matrix
	for (ix = 0; ix < NUMNODES; ix++) {
		for (iy = 0; iy < NUMNODES; iy++) {
			adjMatrix[ix][iy] = rand () % 2;
			cout << adjMatrix[ix][iy] << "\t";
		}
		cout<<endl;
	}

	cout << endl; 

	// Fill up the adjacency list using the matrix above
	for (ix = 0; ix < NUMNODES; ix++) {
		for (iy = 0; iy < NUMNODES; iy++) {
			if (adjMatrix[ix][iy] != 0) {
				adjList[ix]->append(adjList[iy]);
			}
		}
	}

	// Print out the adjacency list
	for (ix = 0; ix < NUMNODES; ix++) {
		adjList[ix]->printList ();
		cout << endl;
	}

	cin.get();
}