#include "sumn.h"

#include <stdio.h>

int sumn(int n) {
    // Min base case er n == 1.
    if (n == 1) {
        return n;
    } else {
        // Mit recursive step er at regne (2*n-1) og lægge den til sumn(n-1)
        return (2 * n - 1) + sumn(n - 1);
    }
    return 0;
}