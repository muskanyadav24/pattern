// 41 42 43 44 45
// 41 42 43 44 45
// 41 42 43 44 45
// 41 42 43 44 45
// 41 42 43 44 45

// while loop, do-while loop, for-loop.

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;

//     while(i<=5){
//         int j=1;
//         while(j<=5){
//             cout <<"4" << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// do-while loop.

#include<iostream>
using namespace std;
int main(){
    int i=1,k;

    do{
        int j=1;
        do{
            cout << "4" << j << " ";
            j++;
        }while(j<=5);
        cout << endl;
        i++;
    }while(i<=5);

    return 0;
}