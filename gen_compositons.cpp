// tuples (c0, ..., c_n) with sum N, and each ci strictly less than k. 
void gen(int idx, int sum, int N, int k, vector<int>& cur, vector<vector<int>>& ans){
    if(idx==sz(cur)){
        if(sum==N) ans.pb(cur);
        return;
    }
    fli(v,0,min(k-1,N-sum)+1){
        cur[idx]=v;
        gen(idx+1,sum+v,N,k,cur,ans);
    }
}