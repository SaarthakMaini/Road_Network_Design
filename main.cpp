#include<bits/stdc++.h>
using namespace std;
int no_of_nodes, no_of_edges;
vector<pair<int,pair<int,int>>> edges;
vector<int> parent;
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
    vector<pair<int,int>> mst;
    for(auto edge:edges){
        int end1=edge.second.first;
        int end2=edge.second.second;
        int weight=edge.first;
        if(find(end1)!=find(end2)){
            unite(end1,end2);
            cost+=weight;
            mst.push_back({end1,end2});
        }
    }
    cout<<"Minimum Cost:"<<cost<<endl;
    cout<<"Edges in MST:"<<endl;
    for(auto edge:mst){
        cout<< edge.first<<"--"<<edge.second;
    }
}
int main(){
    cin>>no_of_nodes>>no_of_edges;
    cout<<"graph{"<<endl;
    for(int i=0;i<no_of_edges;i++){
        int end1,end2,weight;
        cin>>end1>>end2>>weight;
        edges.push_back({weight,{end1,end2}});
        cout<<end1<<"--"<<end2<<"[label=\""<<weight<<"\""<<endl;
    }
    kruskal();
    cout<<"}"<<endl;
    return 0;
}
