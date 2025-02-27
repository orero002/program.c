#include <iostream>
using namespace std;
int main() {
    int i = 1; // Initialize i to 1

    
    do {
        // Print the current value of i
        cout << "Number: " << i << endl;
       cin >>i++; 
    } while (i <= 10); 

    return 0;
}
