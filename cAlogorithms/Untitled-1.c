#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define V 4

// Function to find the minimum cost path
int tsp(int graph[][V], bool visited[], int currPos, int n, int count, int cost, int ans) {
    // If last node is reached and it has a link to the starting node
    // then keep the minimum value out of the total cost of traversal
    // and "ans"
    if (count == n && graph[currPos][0]) {
        ans = cost + graph[currPos][0];
        return ans;
    }

    // BACKTRACKING STEP
    // Loop to traverse the adjacency list of currPos node and increasing the count by 1 and cost
    for (int i = 0; i < n; i++) {
        if (!visited[i] && graph[currPos][i]) {
            // Mark as visited
            visited[i] = true;
            ans = tsp(graph, visited, i, n, count + 1, cost + graph[currPos][i], ans);

            // Mark ith node as unvisited
            visited[i] = false;
        }
    }
    return ans;
}

int main() {
    // n is the number of nodes i.e. V
    int n = 4;

    // Adjacency matrix for the given graph
    int graph[][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    // Boolean array to check if a node has been visited or not
    bool visited[V];

    // Mark 0th node as visited
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }
    visited[0] = true;

    // Find the minimum weight Hamiltonian Cycle
    int ans = tsp(graph, visited, 0, n, 1, 0, INT_MAX);

    // Print the minimum cost
    printf("The minimum cost of the tour is %d\n", ans);

    return 0;
}
