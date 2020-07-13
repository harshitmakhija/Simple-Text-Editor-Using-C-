#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
class ds{
    public:
    int operation;
    int a;
    string s;
    ds(){
        operation=0;
        a=-1;
        s="";
    }
};


int main() {
    string op="";
   
    int j=0;
    int n;
    cin>>n;
    string *prev = new string[n];
    ds *d=new ds[n];
   

    for(int i=0;i<n;i++){
   cin>>d[i].operation;
   if(d[i].operation==1){
     cin>>d[i].s;  
   }
   if (d[i].operation == 2) {
     cin >> d[i].a;
   }
   if (d[i].operation == 3) {
     cin >> d[i].a;
   }
    }
    for(int i=0;i<n;i++){
      if (d[i].operation == 1) {
        prev[j] = op;
        j++;
        op = op + d[i].s;
      }
        if (d[i].operation == 2){
            int l=op.length();
            prev[j]=op;
            j++;
            op=op.substr(0,l-d[i].a);
        }
        if(d[i].operation==3){
            cout<<op[(d[i].a)-1]<<endl;
        }
        if (d[i].operation == 4){
            op=prev[--j];
            
        }
    }

 
    return 0;
}
//Coded By:Harshit-Makhija
