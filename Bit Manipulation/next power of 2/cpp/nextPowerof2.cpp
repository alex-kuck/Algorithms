#include<bits/stdc++.h>

using namespace std;

unsigned int nextPowerOf2(unsigned int n){
    unsigned int p = 1;
    if (n && !(n & (n - 1)))
        return n;
    while (p < n)
        p <<= 1;
    return p;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned int n;
        cin>>n;
        cout<<"Next Power of 2 greater than "<<n<<" is : "<<nextPowerOf2(n)<<endl;
    }
    return 0;
}
