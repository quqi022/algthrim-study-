#include <iostream>
#include <stack>
using namespace std;

long long sum=0;
stack<int> sta;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        while(!sta.empty()&&t>sta.top()){
            sta.pop();
            sum+=sta.size();
        }
        sta.push(t);
    }
    cout<<sum<<endl;
    return 0;
}
