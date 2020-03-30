#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    long long int num3,n1,n2,n3,n4,nn,limit,start,end,rem,div,curr;
    long long int sum=0;
    while(testcases--){
        cin >> limit >> start >> end;
        sum=start+end;
        if(limit>=7){
        num3=(sum)%10;
        n1=(2*num3)%10;
        n2=(4*num3)%10;
        n3=(8*num3)%10;
        n4=(6*num3)%10;
        limit=limit-3;
        rem=limit%4;
        div=limit/4;
        sum=sum+((n1+n2+n3+n4)*div)+num3;
        if(rem==3){
            sum+=(n1+n2+n3);
        }
        else if(rem==2){
            sum+=(n1+n2);
        }
        else if(rem==1){
            sum+=n1;
        }
        }
        else{
            for(int i=2;i<limit;++i){
            curr=sum%10;
            sum+=curr;
        }
        }
        cout << sum;
        if(sum%3==0){
            cout << "Yes" << "\n";
        }
        else{    
        cout << "No" << "\n";
        }
    }
}
