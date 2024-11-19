#include <iostream>

using namespace std;


int main(){
    
    int num =1;

    switch(num % 2){
        case 0:
            cout << "even"<<endl;
            break;

        case 1:
            cout << "odd"<<endl;
            break;
        default:
            cout << "worng input"<<endl;
            break;
    }
}




