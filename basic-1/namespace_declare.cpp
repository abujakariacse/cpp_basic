#include <iostream>
using namespace std;
int main(){
    int a;
    char x;
    double num;

    char str;

    cin >> a;
    cin >> x;
    cin >> num;
    cin >> str;


    cout << a << endl;
    cout << x << endl;
    cout << num << endl;

    // we can assign string in int to get ascii value
    int ascii = str;
    cout << ascii << endl;

      // typecasting in CPP
    cout << int(str) << endl;


    int number = 66;
    cout << char(number)<<endl ;

    return 0;
}