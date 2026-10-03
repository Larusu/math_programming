//
// Euclidian Algorithm for faster way of finding Greatest Common Divisor(GCD)
// of two integers!!!
//
#include <algorithm>
#include <iostream>

// Formula: a = b * q + r 
// a = larger number
// b = smaller number
// q = quotient
// r = remainder
int gcd(int a, int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }

    // Step 1: get larger and smaller number
    int high = std::max(a, b);
    int low = std::min(a, b);
    int quotient = 0, remainder = 0;

    do 
    {
        // Step 2: check if remainder is 0
        if(high % low == 0) 
        {
            return remainder;
        }

        // Step 3: get quotient and remainder
        quotient = static_cast<int>(high / low); // convert float to int
        remainder = high % low;

        // Step 4: swap variables
        high = low;
        low = remainder;
    } while(remainder != 0);

    return 0;
}

int main (int argc, char *argv[]) {
    std::cout << "(48, 18) = GCD (" << gcd(48, 18) << ")\n";  // output 6
    std::cout << "(270, 192) = GCD (" << gcd(192,78) << ")\n"; // output 6
    std::cout << "(35,18) = GCD (" << gcd(35,18) << ")\n"; // output 1 
    std::cout << "(20, 12) = GCD (" << gcd(20, 12) << ")\n"; // output 4
    std::cout << "(210, 45) = GCD (" << gcd(210, 45) << ")\n"; // output 15
    std::cout << "(84, 126) = GCD (" << gcd(84, 126) << ")\n"; // output 42

    return 0;
}
