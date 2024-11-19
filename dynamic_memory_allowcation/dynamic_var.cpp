#include <bits/stdc++.h>
using namespace std;

// Dynamic var doesn't remove when function returns but static variable remove on function returns 

int* p;

// Static variable
// void func (){
//    int x = 5;
//    p = &x;
//    cout<< "Func "<< *p <<endl;
//    return;
// }


// Dynamic variable

void func ()
{
   int* x = new int;

   *x = 5;
   p = x;

   cout<< "Main Func "<< *p <<endl;
   return;
}

int main() 
{

   
   func();

   cout<< "Main Func "<< *p <<endl;

   return 0;
}