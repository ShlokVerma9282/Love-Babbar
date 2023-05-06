#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
#include <unordered_map>
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
bool isInterleave(string a, string b, string c){
	//Your code goes here
    int aS = a.size();
    int bS = b.size();
    int cS = c.size();
    if(aS+bS!=cS){
        return false;
    }
    string x;
    string y;
    int g=0;
    int h=0;
    for(int i=0;i<cS;i++){
        if(c[i]==a[g]){
            x.push_back(c[i]);
            g++;
        }
        else{
            y.push_back(c[i]);
            h++;
        }
    }
    bool ans1 = true;
    if(x!=a){
        ans1=false;
    }
    if(y!=b){
        ans1=false;
    }
    string o;
    string p;
    g=0;
    h=0;
    for(int i=0;i<cS;i++){
        if(c[i]==b[g]){
            o.push_back(c[i]);
            g++;
        }
        else{
            p.push_back(c[i]);
            h++;
        }
    }
    bool ans2=true;
    if(p!=a){
        ans2=false;
    }
    if(o!=b){
        ans2=false;
    }
    if (ans1==true||ans2==true){
        return true;
    }
    if(x==a&&o==b){
        return true;
    }
    return false;
}
int main(){
    string a ="cacccabb";
    string b ="aacbcabb";
    string c ="caccaaccabcbabbb";
    cout<<isInterleave(a,b,c);


}