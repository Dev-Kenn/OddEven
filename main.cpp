#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int number, r;
 
    cout << "Enter a number: ";
    cin >> number;
    
    r = number % 2;
    if (r == 0)
    {
        cout << number << " is an even number";
    }
    else
    {
        cout << number << " is an odd number";
    }
        
	return 0;
}

