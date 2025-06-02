// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// #include<iostream>
// using namespace std;
// int main(){
//     int k=1;
//     for(int i=5; i>=1; i--){

//         for(int j=1; j<=6-i; j++){
//             if(k % 2 == 0){
//                 cout << "0 ";
//             }else{
//                 cout << "1 ";
//             }
//             k++;
            
//         }

//         cout << endl;
//     }

//     return 0;
// }



// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


#include<iostream>
using namespace std;
int main(){
    int k=1;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(k % 2 ==0){
                cout <<  "0 ";
            }else{
                cout <<  "1 ";
            }
            k++;
            
        }
        cout << endl;
    }

    return 0;
}