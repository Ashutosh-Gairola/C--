// #include<iostream>
// #include<algorithm>
// using namespace std;



// bool isSafe(int** arr,int x,int y,int n){

//     if(x<n && y<n && arr[x][y]==1){
//         return true;
//     }
//     return false;

// }

// bool RatinMaze(int** arr,int x,int y,int n,int** Solvarr){
//     if(isSafe(arr,x,y,n)){
//         Solvarr[x][y]=1;
//         if(RatinMaze(arr,x+1,y,n,Solvarr)){
//             return true;
//         }
//         if(RatinMaze(arr,x,y+1,n,Solvarr)){
//             return true;
//         }
//         Solvarr[x][y]=0;
//         return false;
//     }
//     return false;
// }


// int main(){

//     int n;

//     cout<<"enter the N x N value =";
//     cin>>n;


//     //dynamic arr memory allocation
//     int** arr=new int*[n];
//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
            
//             cin>>arr[i][j];
//         }
//     }

//     int** Solvarr=new int*[n];
//     for(int i=0;i<n;i++){
//         Solvarr[i]=new int[n];
//         for(int j=0;j<n;j++){
//             Solvarr[i][j]=0;
//         }
//     }

//     if(RatinMaze(arr,0,0,n,Solvarr)){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<Solvarr[i][j];
//             }
//         }
//     }

//     return 0;
// }

// // 1 0 1 0 1
// // 1 1 1 1 1
// // 0 1 0 1 0
// // 1 0 0 1 1
// // 1 1 1 0 1

#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n) {
    if (x < n && y < n && arr[x][y] == 1) {
        return true;
    }
    return false;
}

bool RatinMaze(int** arr, int x, int y, int n, int** Solvarr) {
    if (x == n - 1 && y == n - 1 && arr[x][y] == 1) {
        Solvarr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n)) {
        Solvarr[x][y] = 1;
        if (RatinMaze(arr, x + 1, y, n, Solvarr)) {
            return true;
        }
        if (RatinMaze(arr, x, y + 1, n, Solvarr)) {
            return true;
        }
        Solvarr[x][y] = 0;
        return false;
    }
    return false;
}

int main() {
    int n;

    cout << "Enter the N x N value: ";
    cin >> n;

    // Dynamic array memory allocation
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter the maze matrix (1 for open, 0 for blocked):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int** Solvarr = new int*[n];
    for (int i = 0; i < n; i++) {
        Solvarr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            Solvarr[i][j] = 0;
        }
    }

    if (RatinMaze(arr, 0, 0, n, Solvarr)) {
        cout << "Solution path:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << Solvarr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No path found\n";
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] Solvarr[i];
    }
    delete[] arr;
    delete[] Solvarr;

    return 0;
}
