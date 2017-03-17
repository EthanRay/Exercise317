#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<queue>
#include<Query.h>

void fun4(int u, int v, int depth, int **G, int mark[], int ret[])
{
	if (u == v){
		printf("%d ", u);
		for (int i = 0; i < depth; i++)
			printf("%d ", ret[i]);
		printf("\n");
		return;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (G[u][i] > 0 && mark[i] == 0)
		{
			mark[i] = 1;
			ret[depth] = 1;
			fun4(i, v, depth + 1, G, mark, ret);
			mark[i] = 0;
		}
	}
		
}

typedef char VertexType;
typedef int EdgeType;
#define MAXVEX 100
#define INFINITY 65535

typedef struct
{
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
}MGraph;

void CreateMGraph(MGraph *G)
{
	G->numVertexes = 4;
	G->numEdges = 5;
	int x, y,w;
	for (int i = 0; i < G->numVertexes; i++)
		G->vexs[i] = i * 3 - 2;
	for (int i = 0; i < G->numVertexes; ++i)
		for (int j = 0; j < G->numVertexes; ++j)
			G->arc[i][j] = INFINITY;
	for (int k = 0; k < G->numEdges; ++k)
	{
		scanf("%d,%d,%d", &x, &y, &w);
		G->arc[x][y] = w;
		G->arc[x][y] = G->arc[y][x];
	}
}

typedef struct EdgeNode
{
	int adjvex;
	EdgeType weight;
	EdgeNode *next;
};
typedef struct VertexNode
{
	VertexType data;
	EdgeNode *firstedge;
}AdjList[MAXVEX];

typedef struct
{
	AdjList adjList;
	int numVertexes, numEdges;
}GraphAdjList;

void CreateALGraph(GraphAdjList*G)
{
	int i, j, k;
	EdgeNode*e;

	G->numVertexes = 4; G->numEdges = 5;
	for (int i = 0; i < G->numVertexes; ++i)
	{
		scanf(&G->adjList[i].data);
		G->adjList[i].firstedge = NULL;
	}

	for (int j = 0; j < G->numEdges; ++j)
	{
		int x, y;
		scanf("%d %d", x, y);
		e = (EdgeNode*)malloc(sizeof(EdgeNode));
		e->adjvex = j;
		e->next = G->adjList[i].firstedge;
		G->adjList[i].firstedge = e;

		
	}

}

bool visited[MAXVEX];
#define Queue std::queue<int>
void BFS(MGraph G)
{
	int i, j;
	std::queue<int> Q;
	

	for (i = 0; i < G.numVertexes; ++i);
	visited[i] = false;

	for (i = 0; i < G.numVertexes; ++i)
	{
		if (!visited[i])
		{
			visited[i] = true;
			Q.push(i);
			while (!Q.empty())
			{
				i = Q.front();
				for (j = 0; j < G.numVertexes; ++j)
				{
					if (G.arc[i][j] == 1 && !visited[j])
					{
						visited[j] = true;
						Q.push(j);
					}
				}
			}
		}
	}
}
void BFS(GraphAdjList *GL)
{
	int i;
	EdgeNode *p;
	Queue Q;
	for (i = 0; i < GL->numVertexes; ++i)
		visited[i] = false;
	for (i = 0; i < GL->numVertexes; ++i)
	{
		if (!visited[i])
		{
			visited[i] = true;
			Q.push(i);
			while (!Q.empty())
			{
				i = Q.front();
				p = GL->adjList[i].firstedge;
				while (p)
				{
					if (!visited[p->adjvex])
					{
						visited[p->adjvex] = TRUE;
						Q.push(p->adjvex);
					}
					p = p->next;
				}
			}
		}
	}
}

void DFS(MGraph G, int i)
{
	int j;
	visited[i] = true;
	for (j = 0; j < G.numVertexes; ++j)
		if (G.arc[i][j] == 1 && !visited[j])
			DFS(G, j);
}

void DFS(GraphAdjList* GL,int i)
{
	EdgeNode *p;
	visited[i] = TRUE;
	p = GL->adjList[i].firstedge;
	while (p)
	{
		if (!visited[p->adjvex])
			DFS(GL, p->adjvex);
		p->next;
	}

}