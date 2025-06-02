#include<iostream>
using namespace std;
int main(){
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 
    // 1 2 3 4 5 

    int i=1;

    do{
        int j=1;
        do{
        cout << j << " ";
        j++;
        }while(j<=5);
        cout << endl;
        i++;
    }while(i<=5);

    return 0;
}