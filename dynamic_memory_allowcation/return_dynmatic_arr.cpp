#include <bits/stdc++.h>
using namespace std;


int* func (){
    // int arr[5];

    int* arr = new int[5];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    return arr;

}

int main() {

   int* p = func();


    for(int i = 0; i < 5; i++){
        cout << p[i] << " ";
    }

   return 0;
}