🏙️ Hamiltonian Cycle using Backtracking
🎯 Aim

To implement the Hamiltonian Cycle using Backtracking for designing a night-patrol route that visits each city area exactly once and returns to the headquarters.

🧩 Problem Statement

The Smart City Transportation Department needs to design a route for security vehicles.
Each area of the city is represented as a vertex, and each road is represented as an edge.
The goal is to find a Hamiltonian Cycle — a route that:

Starts from the main headquarters

Visits every area exactly once

Returns to the starting point

If such a route is not possible, display a suitable message.

⚙️ Algorithm Steps

Start from the headquarters (first vertex).

Add connected vertices one by one, ensuring no vertex repeats.

Check if the last vertex connects back to the starting vertex.

If all vertices are included and connected, a Hamiltonian Cycle exists.

If not, backtrack and try another possible vertex.

🧠 Concept

A Hamiltonian Cycle is a closed loop in a graph that visits every vertex exactly once and returns to the starting point.
The Backtracking approach is used to explore all possible paths until a valid cycle is found.

🧾 Example

For areas T, M, S, H, C, a valid cycle could be:
T → M → H → C → S → T

📘 Tools & Technologies

Language: Python

Data Structure: Adjacency Matrix

Approach: Backtracking

⏱️ Complexity

Time Complexity: O(N!)

Space Complexity: O(N)

🚀 Applications

Designing patrol or delivery routes

Network routing

Circuit design

Travelling Salesman Problem (TSP)
