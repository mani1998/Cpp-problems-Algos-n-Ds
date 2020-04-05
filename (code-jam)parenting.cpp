#include<bits/stdc++.h>
using namespace std;
 int main(){
     int testcases,k=1;
     cin >> testcases;
     vector<pair<int,int> > times;
     string res="";
     bool flag=true;
     int start,end,n,jstart=0,jend=0,cstart=0,ccend=0;
     while(testcases--){
         jstart=0,jend=0,cstart=0,ccend=0;
         cin >> n;
         for(int i=0;i<n;++i){
         cin >> start >> end;
         times.push_back(make_pair(start,end));
         }
         //sort(times.begin(),times.end());
         jstart=times[0].first;
         jend=times[0].second;
         res+="J";
         for(int i=1;i<n;i++){
             if(times[i].first>=jend || times[i].second<=jstart){
                 jstart=times[i].first;
                 jend=times[i].second;
                 res+="J";
             }
             else if(times[i].first>=ccend || times[i].second<=cstart){
                 cstart=times[i].first;
                 ccend=times[i].second;
                 res+="C";
         }
             else{
                 flag=false;
                 break;
             }
     }
    if(flag)
        cout << "Case #" << k << ": " << res;
    else
        cout << "Case #" << k << ": " << "Impossible";
    cout << endl;
    times.clear();
    res="";
    k++;
    flag=true;
 }
 }
