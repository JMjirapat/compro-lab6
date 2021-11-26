#include<iostream>
using namespace std;

int main(){
    int num_even = 0, num_odd = 0, N;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        if(N != 0){
            if(N%2 == 0){
            num_even++;
            }else{
                num_odd++;
            }
        }
    }
    cout << "#Even numbers = " << num_even;
    cout << "\n#Odd numbers = " << num_odd;
    return 0;
}
