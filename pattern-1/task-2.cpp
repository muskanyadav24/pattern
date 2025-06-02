// n=k*k = n-1

// 0
// 3 8 
// 15 24 35
// 48 63 80 99
// 120 143 168 195 224

#include<iostream>
using namespace std;
int main(){
    int n=0,k=1;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            n=k*k;
            if(n){
                n-=1;
                cout << n <<" ";
            }
            k++;
        }
        cout << endl;
    }

    return 0;
}