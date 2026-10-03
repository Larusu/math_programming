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
    std::cout << "(48, 18) = GCD (" << gcd(48, 18) << ")\n";
    std::cout << "(270, 192) = GCD (" << gcd(192,78) << ")\n";
    return 0;
}
