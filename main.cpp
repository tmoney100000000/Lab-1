/**
 * Name: Tristan Holup
 * Due Date: Friday, September 27, 2019
 * Description: This program implements Euclid's Algorithm to find the greatest common divisor (GCD)
 * of two integers. For help understanding Euclid's Algorithm, I watched a YouTube video titled,
 * "Number Theory: Euclidean Algorithm - An Example" (link: https://www.youtube.com/watch?v=fwuj4yzoX1o).
 */

#include <iostream>
using namespace std;

int euclid(int x, int y){

    //base case
    if(y == 0){
        return x;
    }

    //recursive call
    else{
        int temp = y; //setting a temporary value equal to y
        y = x % y; //setting y to the remainder of x divided by y
        x = temp; //setting x equal to y
        return euclid(x,y); //calling the same method on the new values of x and y
    }

}


int main() {
    int x;
    int y;

    cout << "Enter an integer greater than 1: " << endl;
    cin >> x;
    cout << "Enter another integer greater than 1: " << endl;
    cin >> y;

    //ensuring that x is greater than y
    int temp;
    if (x<y){
        temp = x;
        x = y;
        y = temp;
    }

    //finding and printing the GCD
    int gcd = euclid(x,y);
    cout << "The GCD of " << x << " and " << y << " is: " << gcd;

    return 0;
}