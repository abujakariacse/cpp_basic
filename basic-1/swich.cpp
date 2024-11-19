#include <iostream>

using namespace std;

int main(){
    int num = 0;

    switch(num){
        case 1:
            cout << "Number is 1\n";
            break;
        case 2:
            cout << "Number is 2\n";
            break;
        case 3:
            cout << "Number is 3\n";
            break;
        case 4:
            cout << "Number is 4\n";
            break;
        case 5:
            cout << "Number is 5\n";
            break;
        default:
            cout << "Out of bound\n";
            break;
    }
}