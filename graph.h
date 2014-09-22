#include "node.h" 

class graph {

private:
	int num_nodes;
	node** adjList;
	int** adjMatrix;

public:
	void init (int num);
	void DFS (int start);
	void printGraph ();
};