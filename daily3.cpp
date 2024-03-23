#include <iostream>  
#include <sstream>//字符串读写  
#include <vector>//类数组
#include <string>//字符串  
#include <algorithm>//算法库  
#include <cctype>//检查,更改字符串

using namespace std;



int main() {
    int n,t;
    cin>>n>>t;
    string str1;
    cin>>str1;
    while(t){
        for(int i=0;i<n;i++){
            if(str1[i]=='B'&&str1[i+1]=='G'){
                swap(str1[i],str1[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<str1<<endl;
    return 0;  
}