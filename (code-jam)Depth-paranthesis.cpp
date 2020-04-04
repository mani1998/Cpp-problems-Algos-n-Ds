#include<bits/stdc++.h>
using namespace std;
string paras(int num){
    int j=1;
    string res1="";
    if(num<0){
        j=0;
        num=(num*-1);
    }
    for(int i=0;i<num;++i){
        if(j){
            res1+="(";
        }
        else{
            res1+=")";
        }
    }
    return res1;
}
int main(){
    int testcases;
    cin >> testcases;
    string num,res="",s1="",s2="",i1="",i2="";
    int arr[101],len=0,k=1;
    while(testcases--){
        cin >> num;
        len=num.length();
        memset(arr,0,sizeof(arr));
        for(int i=0;i<len-1;++i){
            s1=num[i+1],s2=num[i];
            arr[i]= stoi(s1)- stoi(s2);
        }
        i1=num[0];
        i2=num[len-1];
        res=paras(stoi(i1))+num[0];
        for(int i=0;i<len;++i){
            res+=paras(arr[i])+num[i+1];
        }
        res=res+paras((-1*(stoi(i2))));
        cout << "Case #" << k << ": "<< res << "\n";
        k++;
    }
}
