#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
#include <unordered_map>
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int kthSmallest(int mat[4][4], int k) {
        int row = 4;
        int col = 4;
        if(k>row*col)
        {
            return 0;
        }
        if(k<1){
            return 0;
        }
        int x =0;
        int y =0;
        k = (row*col)-k;
        for(int i=0;i<row;i++){
            if((i*(col-1))>k){
                x=i;
                break;
            }
        }
        int temp = ((x+1)*col)-k;
        return mat[x][col-(temp+1)];
    }
int main(){
    int c[4][4] = {{1,5,9},{10,11,13},{},{13,14,15,16}};
    cout<<kthSmallest(c,5);

}