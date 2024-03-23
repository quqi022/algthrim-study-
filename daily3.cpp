#include <iostream>  
#include <sstream>//字符串读写  
#include <vector>//类数组
#include <string>//字符串  
#include <algorithm>//算法库  
#include <cctype>//检查,更改字符串

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int time=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k;
        stable_sort(a,a+n);
        if(n%2==0){
            k=n/2-1;
        }else{
            k=n/2;
        }
        if(n==1){
            time++;
        }else if(n==2){
            if(a[0]!=a[1]){
                time++;
            }else{
                time++;
                time++;
            } 
        }else{
            if(a[k]==a[k+1]){
                time++;
                for(int i=k;i<n-1;i++){
                    if(a[i]==a[i+1]){
                        time++;
                    }else{
                        break;
                    }
                }
            }else if(a[k]<a[k+1]){
                time++;
            }
        }
    cout<<time<<endl;
    }
    return 0;  
}