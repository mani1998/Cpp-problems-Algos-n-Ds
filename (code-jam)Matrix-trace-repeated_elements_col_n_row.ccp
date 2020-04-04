#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    int n,rval=0,cval=0,trace,mat[101][101],row[101][101],col[101][101],rsum,csum,i=1;
    while(testcases--){
        cin >> n;
        trace=0;
        rsum=0;
        csum=0;
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin >> mat[i][j];
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(i==j){
                    trace+=mat[i][j];
                }
            }
        }
         for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                rval=mat[i][j]-1;
                row[i][rval]++;
                cval=mat[j][i]-1;
                col[i][cval]++;
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(row[i][j]>=2){
                    rsum++;
                    break;
                }
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(col[i][j]>=2){
                    csum++;
                    break;
                }
            }
        }
    cout <<"Case #"<< i << ": "<< trace << " " << rsum <<" "<< csum << endl;
       i++; 
    }
    }
