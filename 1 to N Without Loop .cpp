vector<int>ans;

void solve(int x,int i)
{
    if(i<0){
        return ;
    }

    ans.push_back(x-i);

    solve(x,i-1);
}
vector<int> printNos(int x) {
    
    
  
   solve(x,x-1);

   return ans;

}

