#include <stdio.h>

int main()
{
    int vertices;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    int graph[vertices][vertices];

    
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            graph[i][j] = 0;
        }
    }

    int edges;

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    // Input edges
    for (int i = 0; i < edges; i++)
    {
        int u, v;

        printf("Enter edge %d (u v): ", i + 1);
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;   
    }

    // Print adjacency matrix
    printf("\nAdjacency Matrix:\n");

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            printf("%d ", graph[i][j]);
        }

        printf("\n");
    }

    return 0;
}