#include <iostream>
#include <stack>
using namespace std;

int n,t;
stack<int> sta;

int main(){
    cin>>n;
    int r[n];
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
        while(!sta.empty()&&h[i]>h[sta.top()]){
            r[sta.top()]=i+1;
            sta.pop();
        }
        sta.push(i);
    }
    while(!sta.empty()){
        r[sta.top()]=0;
        sta.pop();
    }
    for(int i=0;i<n;i++){
        cout<<r[i]<<endl;
    }
    return 0;
}