#include<iostream>
#include<cmath>
using namespace std;

int primeNum(int num){
    int answer = 0;
    for(int i = 2; i < num; i++){
        if (num % i == 0) {
            cout << "It is not a prime number" << endl;
            return 1;
        }
    }
    for(int i = num-1; i > 1; i--){
        bool flag = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            answer = i;
            break;
        }
    }
    
    cout << "Prime number less than " << num << " is " <<  answer  << endl;
    return 0;
}
int main(){
    int num;
    cout << "Assign a number: ";
    cin  >> num;
    primeNum(num);
}
 

