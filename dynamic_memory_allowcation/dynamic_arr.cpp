#include <bits/stdc++.h>
using namespace std;

int main() {

    //static array. we can't increase it's size & it will unavailable on function returns
    //int arr[5];


    // Dynamic arr - we can increase it's size and it will be available on function returns
    int* arr = new int [5];

   for(int i = 0; i < 5;i++){
    cin >> arr[i];
   }

   for(int i = 0; i < 5; i++){
    cout<< arr[i] << " ";
   }




   return 0;
}


