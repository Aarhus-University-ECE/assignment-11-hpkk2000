/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h> /* assert */
#include <stdio.h>  /* printf */

/* Fibonacci function definition */
int fib(int n, int p, int pp) {
    // Min basecase ved fibonacci er n==1.
    // Jeg har kun 1 basecase, fordi udregningen af fibonacci sker i mit
    // recursive step.
    if (n == 1) {
        return p;
    } else {
        // Her returner jeg funktionen fib.
        // I funktionskaldet sker min udregning af p, dermed bliver det tail
        // recursive.
        return fib(n - 1, pp, p + pp);
    }
    return 0;
}