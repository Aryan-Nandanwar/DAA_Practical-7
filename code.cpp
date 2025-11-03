#include <iostream>
#include <vector>
using namespace std;

bool isValid(int v, int pos, vector<int>& path, vector<vector<int>>& graph) {
    if (graph[path[pos - 1]][v] == 0)
        return false;
    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;
    return true;
}

bool hamiltonianUtil(vector<vector<int>>& graph, vector<int>& path, int pos) {
    int n = graph.size();
    if (pos == n) {
        return graph[path[pos - 1]][path[0]] == 1;
    }
    for (int v = 1; v < n; v++) {
        if (isValid(v, pos, path, graph)) {
            path[pos] = v;
            if (hamiltonianUtil(graph, path, pos + 1))
                return true;
            path[pos] = -1;
        }
    }
    return false;
}

bool hamiltonianCycle(vector<vector<int>>& graph, vector<char>& vertices) {
    int n = graph.size();
    vector<int> path(n, -1);
    path[0] = 0;
    if (!hamiltonianUtil(graph, path, 1)) {
        cout << "No Hamiltonian Cycle exists in this graph." << endl;
        return false;
    }
    cout << "Hamiltonian Cycle found:" << endl;
    for (int v : path)
        cout << vertices[v] << " → ";
    cout << vertices[path[0]] << endl;
    return true;
}

int main() {
    vector<char> vertices = {'T', 'M', 'S', 'H', 'C'};
    vector<vector<int>> graph = {
        {0, 1, 1, 0, 1},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 1, 0}
    };
    hamiltonianCycle(graph, vertices);
    return 0;
}
