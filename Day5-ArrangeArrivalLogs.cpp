// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

// Input:
// - First line: integer p (number of entries in server log 1)
// - Second line: p sorted integers representing arrival times from server 1
// - Third line: integer q (number of entries in server log 2)
// - Fourth line: q sorted integers representing arrival times from server 2)

// Output:
// - Print a single line containing all arrival times in chronological order, separated by spaces

// Example:
// Input:
// 5
// 10 20 30 50 70
// 4
// 15 25 40 60

// Output:
// 10 15 20 25 30 40 50 60 70

// Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed

#include<bits/stdc++.h>
using namespace std;

void finalLog(vector<int> &log, const vector<int> &log1, const vector<int> &log2){
    int i = 0, j = 0,k = 0, n = log1.size(), m = log2.size();
    while(i < n && j < m){
        if(log1[i]<=log2[j]){
            log[k++] = log1[i++];
        }else{
            log[k++] = log2[j++];
        }
    }
    while(i < n){
        log[k++] = log1[i++];
    }
    while(j < m){
        log[k++] = log2[j++];
    }
}

int main(){
    int p,q;
    cin>>p;
    vector<int> log1(p);
    for(int i = 0; i<log1.size(); i++){
        cin>>log1[i];
    }
    cin>>q;
    vector<int> log2(q);
    for(int i = 0; i<log2.size(); i++){
        cin>>log2[i];
    }
    vector<int> log(p+q);
    finalLog(log, log1, log2);
    for(int val:log){
        cout<<val<<" ";
    }
    return 0;
}