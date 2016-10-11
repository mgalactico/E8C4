/*
Calculate # of squares needed for user submitted # of grains of rice.
Grains of rice in each square double every square.
*/

#include "../std_lib_facilities.h"

int main() {

    int riceSum = 1; //Square 1 has 1 grain of rice.
    int numSquares, grainsOfRice;
    cout << "Please enter number of grains of rice: ";
    cin >> grainsOfRice;

    if (grainsOfRice == 1) {  //If user enters 1 as the # of grains of rice.
        cout << "Number of squares needed for " << grainsOfRice << " grain of rice: " << riceSum << " square.";
    } else { //For input other than 1
        for (int i = 2; riceSum < grainsOfRice; ++i) { //i starts at 2 as
            riceSum = riceSum * 2;
            numSquares = i;
            //cout << riceSum << '\t' << i << endl;
        }
        cout << "Number of squares needed for " << grainsOfRice << " grains of rice: " << numSquares << " squares.";
    }

    return 0;
}