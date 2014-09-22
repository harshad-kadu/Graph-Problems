#include <iostream>
#include "graph.h"
#define NUMNODES 5

using namespace std;

int main () {
	graph G;

	G.init(NUMNODES);
	G.printGraph();
	G.DFS (2);
	
	cin.get();
}