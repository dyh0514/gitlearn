#include<iostream>
using namespace std;
#include<set>
 int main(){
    set<int> set1;
    int arr[4]={10,30,20,40};
    set1.insert(arr,arr+4);
    for(auto x: set1){
        cout<< x<<" ";
    }cout<<endl;
    set1.insert(30);
    for(auto x: set1){
        cout<< x <<" ";
    }cout<<endl;
    if(set1.find(30)!=set1.end()){
        cout<<*set1.find(30)<<endl;
    }
    else cout<<"meizhaodao"<<endl;    
    cout<<"30 num: "<<set1.count(30)<<endl;
    if(set1.find(30)!=set1.end()){
        set1.erase(30);set1.insert(35);
    }
 pair<set<int>:: iterator,bool>result;
 result= set1.insert(30);
 if(result){}
    return 0;
 }