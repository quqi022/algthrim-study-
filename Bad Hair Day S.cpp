#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    stack<int> st;
    int sum=0;
    st.push(0);
    for(int i=1;i<n;i++){
        if(h[i]<=h[st.top()]){
            st.push(i);
        }else{
            while(!st.empty()&&h[i]>h[st.top()]){
                sum+=i-st.top()-1;
                st.pop();
                }
            st.push(i);
            } 
        if(i==n-1){
            int k=st.size();
            sum+=k-1;
        }     
    }   
    cout<<sum<<endl;
    return 0;
}