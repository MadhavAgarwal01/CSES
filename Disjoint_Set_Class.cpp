class UnionFind {
public:
    vector<int> group; // parent
    vector<int> rank;

    UnionFind(int start,int size)
    {
        group = vector<int>(size);
        rank = vector<int>(size);
        
        for (int i = start; i < size; ++i)
            group[i] = i;
    }

    int find(int node)
    {
        if (group[node] == node)
            return node;

        group[node] = find(group[node]);
        return group[node];
    }

    bool join(int node1, int node2)
    {
        int group1 = find(node1);
        int group2 = find(node2);
        
        // node1 and node2 already belong to same group.
        // Do no use this function only for this condition ( your data will be tampered )
        if (group1 == group2)   return false;

        // this will be executed if they do not belong to same group
        if      (rank[group1] > rank[group2])        group[group2] = group1;
        else if (rank[group1] < rank[group2])        group[group1] = group2;
        else 
        {
            group[group1] = group2;
            rank[group2]++;
        }

        return true;
    }
};
