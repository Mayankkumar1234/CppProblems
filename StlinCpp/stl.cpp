#include<bits/stdc++.h>
using namespace std;


int main(){
// Pairs in C++

// pair<int, int>p = {1,2};
// cout << p.first << " " << p.second << endl;


// pair <int, int>p = {1,2};

// cout << p.first<<"  "<< p.second;

pair<int, pair<int, int>> p = {1,{3,4}};

cout<<p.first <<"  "<<p.second.second<<" "<<p.second.first;

pair<int , int> arr[] = {{1,2},{2,5},{5,1}};

cout <<arr[1].second;
  return 0;
}