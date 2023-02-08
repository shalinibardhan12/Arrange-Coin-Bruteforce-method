#include<iostream>
using namespace std;
int CompleteRow(int n){
    int count = 1;
int ans =0;
while(n>=count){
    n = n-count;
    ans++;
    count++;
}
return ans;
}
int main(){
    int n;
    cout<<"enter the number of coin"<<endl;
    cin>>n;
    int ans = CompleteRow(n);
    cout<<"Number of complete row is "<<ans;
    return 0;
}