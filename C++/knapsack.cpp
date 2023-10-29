#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

void log(){
    std::ios::sync_with_stdio(false);
    freopen("./log/input.txt","r",stdin);
    freopen("./log/output.txt","w", stdout);
    return;
}

int dp[50][50];

int knapsack(int wt[], int value[], int W, int n)
{
    if(n<0||W==0)
        return 0;
    if(dp[n][W]!=-1)
        return dp[n][W];
    if (wt[n] > W)
        return dp[n][W] = knapsack(wt, value, W, n - 1);
    else
        return dp[n][W] = max(value[n] + knapsack(wt, value, W - wt[n], n - 1), knapsack(wt, value, W, n - 1));
}

int main(){
    log();
    memset(dp, -1, sizeof(dp));
    int n, W;
    cin >> W >> n;
    int wt[n], value[n];
    for (int i = 0; i < n;i++)
        cin >> wt[i];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    cout << knapsack(wt, value, W, n - 1);
    return 0;
}

