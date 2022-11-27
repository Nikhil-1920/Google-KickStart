// Date Created: 04/03/2022
// Author: Nikhil Singh
// Last Modifid: 05/10/2022


#include <iostream>
using namespace std;


int main(void) {

    unsigned int T = 0;
    cin >> T;
    
    for(int TC = 1; TC <= T; TC++) {
        
        int sum = 0;
        string N;
        cin >> N;

        cout << "Case #" << TC << ": ";
        
        for(auto digit : N) {
            
            sum += digit - '0';
            sum %= 9;
        }

        sum = (9 - sum) % 9;

        char newDigit = '0' + sum;
        bool call = 0;
        bool flag = newDigit != '0';

        for(auto digit : N) {

            if(newDigit < digit && !call && flag) {

                cout << newDigit;
                call = 1;
            }

            flag = 1;
            cout << digit;
        }
        
        if(!call) { cout << newDigit; }
        putchar('\n');
    }
    
    return 0;
}  
