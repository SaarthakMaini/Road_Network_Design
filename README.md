# Road Network Design
<strong>
Algorithm : Kruskal's Algorithm
<br>
Approach : Greedy Approach
<br>
Programming Language : C++
</strong>

## Objective

The objective of this project is to design a road network that efficiently connects various locations in a given area using the Kruskal's algorithm to make a Minimum Spanning Tree.
This project aims to create a cost-effective road network that connects all locations with the minimum possible cost.

## Methodology

The project will begin by identifying the various locations in the area and representing them as vertices in a weighted graph.

The roads between the locations will be represented as edges in the graph, and the weight of each edge will represent the cost of building a road between two locations.

Kruskal's Algorithm will be applied to the graph to find the minimum spanning tree or the minimum cost tree that connects all the locations.

The minimum spanning tree will be a subgraph of the original graph that contains  all the vertices but has the minimum possible total weight.

Once, the minimum spanning tree is obtained , it will be used to design the road network.

The edges in the minimum spanning tree will represent the roads that should be built. The vertices will represent the locations where the roads should be connected and to show the path clearly, we are using a tool called GraphViz and using file handling to shift the output of the C++ program to the file with .dot extension.

## Expected Outcome

The expected outcome of this project is to design a road network that connects all locations in a given area with the minimum possible cost. The road network will be efficient and cost effective, ensuring that people and goods can move around the area with ease

## Flow Chart

The flow chart represents the various steps of the project:

![image](https://user-images.githubusercontent.com/94912101/235471303-c0209ada-15ad-4110-9988-97e70d3c3f8b.png)

## Example

Lets try to determine the set of roads which need to be included in the network of 6 cities provided which would lead to a Minimum Cost Of Production.

The 6 cities considered are :

- Mumbai
- Delhi
- Kolkata
- Bengaluru
- Chennai
- Hyderabad

Terminal Output Depicting The Edges In The Minimum Spanning Tree Along With It's Cost

<img src="https://user-images.githubusercontent.com/94912101/236620558-0037ea74-fe8a-4b1c-be17-9562c722d8e9.png">

Original Graph           |  Minimum Spanning Tree
:-------------------------:|:-------------------------:
![](https://user-images.githubusercontent.com/94912101/236620570-2e1127b3-66d5-4f06-a78b-4c970cec3194.png)  |  ![](https://user-images.githubusercontent.com/94912101/236620576-2f2b58fc-fe5b-43cb-a583-389e1f58db61.png)
## Conclusion

Road network design using minimum spanning tree is a graph theory approach that can be used to design a cost-effective road network that connects various locations in an area.

The approach ensures that all the locations are connected with the minimum possible cost , resulting in an efficient road network that benefits the community.

## Video Playlist

In this [video playlist](https://www.youtube.com/playlist?list=PLL8Oif1Nvo3xnh_fGCSDzfeeJuwGGvBkc) I give in-depth explaination about the project, build it live and demonstrate it's functionality in detail



