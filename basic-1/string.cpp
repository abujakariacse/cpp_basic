#include <iostream>
using namespace std;

int main() {

   int x;
   char t[1000];

    //cin can't take input of space for string.
    //cin >> s;

    cin >> x;
    cin.ignore();
    cin.getline(t, 1000);

   cout << x << endl;
   cout << t << endl;


   return 0;
}