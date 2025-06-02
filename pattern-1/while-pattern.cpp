#include<iostream>
using namespace std;
int main(){
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 

    int i=1;

    while(i<=5){
        int j=1;
        while(j<=5){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}