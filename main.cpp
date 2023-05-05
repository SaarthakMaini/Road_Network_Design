#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int no_of_nodes, no_of_edges;
map<string, int> node_map;
vector<pair<int,pair<int,int>>> edges;
vector<int> parent(1000);
int find(int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent[x]);
}
int unite(int x,int y){
    x=find(x);
    y=find(y);
    if(x!=y){
        parent[x]=y;
    }
}
void kruskal(){
    sort(edges.begin(),edges.end());
    for(int i=1;i<=no_of_nodes;i++){
        parent[i]=i;
    }
    int cost=0;
    vector<pair<pair<string,string>,int>> mst;
    ofstream outfile("output.gv");
    outfile << "graph MST{\n";
    for(auto edge:edges){
        int end1=edge.second.first;
        int end2=edge.second.second;
        int weight=edge.first;
        string node1, node2;
        for(auto node: node_map){
            if(node.second == end1) node1 = node.first;
            if(node.second == end2) node2 = node.first;
        }
        if(find(end1)!=find(end2)){
            unite(end1,end2);
            cost+=weight;
            mst.push_back({{node1,node2},weight});
        }
    }
    cout<<"Minimum Cost:"<<cost<<endl;
    cout<<"Edges in MST:"<<endl;
    for(auto edge:mst){
        cout<< edge.first.first<<"--"<<edge.first.second<<"[label=" << edge.second << "];\n";
        outfile << edge.first.first<<"--"<<edge.first.second<<"[label=" << edge.second << "];\n";
    }
    outfile << "}\n";
    outfile.close();
}
int main(){
    cout<<"Please enter number of nodes present in the Graph:";
    cin>>no_of_nodes;
    cout<<"\nPlease enter number of edges present in the Graph:";
    cin>>no_of_edges;
    ofstream originaloutfile("original.gv");
    originaloutfile << "graph Original{\n";
    for(int i=0;i<no_of_edges;i++){
        string end1,end2;
        int weight;
        cin>>end1>>end2>>weight;
        if(node_map.find(end1) == node_map.end()) node_map[end1] = node_map.size()+1;
        if(node_map.find(end2) == node_map.end()) node_map[end2] = node_map.size()+1;
        edges.push_back({weight,{node_map[end1],node_map[end2]}});
        originaloutfile << end1 << "--" << end2 << " [label=" << weight << "];\n";
    }
    originaloutfile << "}\n";
    originaloutfile.close();
    kruskal();
    system("dot -Tpng original.gv -o original.png > NUL 2>&1");
    system("dot -Tpng output.gv -o output.png > NUL 2>&1");
    system("powershell -c .\\original.png");
    system("powershell -c .\\output.png");
    return 0;
}
