#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<1;i++){
        cout<<"100"<<endl;                               
        for(int j=0;j<100;j++){  
            int len=rand()%10;
            int cost=rand()%100;
            int n=rand()%10;
            cout<<cost<<' '<<n<<endl;             /////Test 1
            if(n>len){
                n=len-1;
            }
            for(int i=0;i<len;i++){
                cout<<rand()%10;
            } 
            cout<<endl;
        }
    }
    for(int i=0;i<1;i++){
        cout<<"10"<<endl;
        for(int j=0;j<10;j++){
            int cost=rand()%1000;                ///// Test 2
            int n=rand()%20;
            int len=rand()%100;
            if(n>len){
                n=len-1;
            }
            cout<<cost<<' '<<n<<endl;
            for(int i=0;i<len;i++){
                cout<<rand()%10;
            } 
            cout<<endl;
        }
    }
    for(int i=0;i<1;i++){
        cout<<"1"<<endl;
        for(int j=0;j<1;j++){
            cout<<rand()%1000<<' '<<rand()%50<<endl;       ///// Test 3
            int n=1000;
            for(int i=0;i<n;i++){
                cout<<rand()%10;
            } 
            cout<<endl;
        }
    }   
}