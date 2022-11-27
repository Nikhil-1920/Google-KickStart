// Date Created: 04/03/2022
// Author: Nikhil Singh
// Last Modifid: 05/10/2022


#include <iostream>
using namespace std;


void checkSubSequence(string I, string P) {

    long int N = I.length();
    long int M = P.length();
    
    long int ptrI = 0;
    long int ptrP = 0;

    while(ptrI < N && ptrP < M) {

        if(I[ptrI] == P[ptrP]) { ptrI++; ptrP++; }
        else { ptrP++; }
    }

    if(ptrI == N) { cout << M - N << endl; }
    else { cout << "IMPOSSIBLE" << endl; }
}


int main(void) {

    unsigned int T = 0;
    cin >> T;

    for(int TC = 1; TC <= T; ++TC) {

        string I, P;
        cin >> I;
        cin >> P;

        cout << "Case #" << TC << ": ";
        checkSubSequence(I, P);       
    }

    return 0; 
}
