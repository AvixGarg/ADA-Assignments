
// Patlu and Motu works in a building construction, they have to put some number of bricks  in a building construction, they have to put some number of bricks N from one place to another, and started doing their work. They decided , they end up with a fun challenge who will put the last brick. one place to another, and started doing their work. They decided , they end up with a fun challenge who will put the last brick.
// They to follow a simple rule, In the i'th round, Patlu puts i bricks whereas Motu puts ix2 bricks. There are only N bricks, you need to help find the challenge result to find who put the last brick you need to help find the challenge result to find who put the last brick.
// Input: First line contains an integer N.
// Output: Output
// "Patlu" (without the quotes) if  (without the quotes) if Patlu puts the last bricks ,"Motu"(without the quotes) otherwise. the quotes) otherwise.
// Constraints: 1 ≤ N ≤ 10000
// 10000
// Sample Input: 13
// Sample Output: Motu

#include <bits/stdc++.h>
using namespace std;

void lastBrick(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        if(sum>=n){
            cout<<"motu"<<endl;
            return;
        }
            
        sum+= i;
        if(sum>=n){
            cout<<"patlu"<<endl;
            return;
        }
            
        sum+= 2*i;
        
    }
}

int main(){
    int n;
    cin>>n;
    lastBrick(n);
}