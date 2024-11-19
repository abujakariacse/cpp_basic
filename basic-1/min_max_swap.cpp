#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e;

   cin >> a >> b >> c >> d >> e;

   cout << min({a,b, c, d, e})<< endl;

   cout << max({a,b, c, d, e}) << endl;

   swap(a, b);

   cout << a <<  " " << b << endl;

   


   return 0;


}

