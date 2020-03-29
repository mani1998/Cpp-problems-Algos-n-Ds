#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int n=0;n<10;++n)
     cout << (pow((1+sqrt(5)),n)-pow((1-sqrt(5)),n))/(pow(2,n)*sqrt(5)) << "\n";
}
