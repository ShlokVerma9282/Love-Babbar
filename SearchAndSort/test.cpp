#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
#include <unordered_map>
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
long long int help(string s,int**dp,int i,int j)
    {
        if (i > j)
            return 0;
    
        if (dp[i][j] != -1)
            return dp[i][j];
    
        if (i == j)
            return dp[i][j] = 1;
    
        else if (s[i] == s[j])
            return dp[i][j] = help(s,dp,i + 1, j) + help(s,dp,i, j - 1) + 1;
        else
            return dp[i][j] = help(s,dp,i + 1, j) +help(s,dp,i, j - 1)-help(s,dp,i + 1, j - 1);
    }
    long long int countPalindromicSubsequences(string s) 
    {
        int n = s.size();
        int **dp =  new int*[10000];
        for (int i = 0; i < n; i++)
        {
            dp[i] =new int[10000];
            for (int j = 0; j < n; j++)
            {
                dp[i][j]=-1;
            }
            
        }
        //vector<vector<long long int>>dp(n,vector<long long int>(n,-1));
        return help(s,dp,0,n-1);
    }
int main(){
    string s ="bccb";  
    cout<<countPalindromicSubsequences(s);

}