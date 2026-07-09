// Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

// Input:
// - First line: two integers r and c representing the number of rows and columns
// - Next r lines: c integers each representing the matrix elements

// Output:
// - Print all visited elements in the order of traversal, separated by spaces

// Example:
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 1 2 3 6 9 8 7 4 5

// Explanation:
// The traversal begins along the top row, proceeds down the rightmost column, then moves across the bottom row in reverse, and finally goes up the leftmost column. The same pattern repeats for the inner submatrix.

// Test Cases:

// Test Case 1:
// Input:
// 2 3
// 1 2 3
// 4 5 6
// Output:
// 1 2 3 6 5 4

// Test Case 2:
// Input:
// 3 1
// 7
// 8
// 9
// Output:
// 7 8 9

//  Time Complexity: O(r × c)
//  Auxiliary Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin>>r>>c;
    vector<vector<int>> matrix(r,vector<int> (c));
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>matrix[i][j];
        }
    }
    int top = 0;
    int right = c-1;
    int bottom = r-1;
    int left = 0;
    while(top<=bottom && left<=right){
        //top part
        for(int i = left; i<=right; i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;

        //right part
        for(int i = top; i<=bottom; i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;

        //bottom part
        if(top<=bottom){
            for(int i = right; i>=left; i--){
            cout<<matrix[bottom][i]<<" ";
            }
        bottom--;
        }

        //left part
        if(left<=right){
            for(int i = bottom; i>=top; i--){
            cout<<matrix[i][left]<<" ";
            }
        left++;
        }
    }
    return 0;
    
}