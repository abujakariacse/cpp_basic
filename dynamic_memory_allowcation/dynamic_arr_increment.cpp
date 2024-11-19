#include <bits/stdc++.h>
using namespace std;

int main() {

// we can't delete old array or unnecessary array when We don't need that when we use static array
//    int arr[3];

// we can delete old array in dynamic arr
int* arr = new int[3];

   for(int i = 0; i < 3; i++){
    cin >> arr[i];
   }


   for(int i = 0; i < 3; i++){
    cout << arr[i] << " ";
   }

   cout << endl;

 

//    int b[5];
int* b = new int[5];

   for(int i = 0; i < 3; i++){
    b[i] = arr[i];
   }

   b[3] = 40;
   b[4] = 50;

     delete[] arr;

for(int i = 0; i < 5; i++){
   cout<< b[i] << " ";
}


   return 0;
}