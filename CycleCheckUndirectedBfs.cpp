vector<int> vis(V,0);
        queue<pair<int,int>> q;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                vis[i]=1;
                q.push({i,-1});
                while(!q.empty()){
                    auto it=q.front();
                    q.pop();
                    int cur=it.first;
                    int parent=it.second;
                    for(auto itr:adj[cur]){
                        if(!vis[itr]){
                            vis[itr]=1;
                            q.push({itr,cur});
                        }
                        else if(itr!=parent){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
