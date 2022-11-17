#include "sum.h"

#include <assert.h>
#include <stdio.h>

/* Sum integers 1 to n */
int sum(int n) {
    /* pre-condition */
    assert(n >= 1);
    /* post-condition */
    if (n > 1)
        return n + sum(n - 1);
    else
        return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total) {
    // Min base case er at n==1.
    // Da det er tail recursive, sker udregningen i mit funktionskald. Derfor
    // skal den bare return den sidste udregning.
    if (n == 1) {
        return n + total;
    } else {
        return sumtail(n - 1, n + total);
    }
}

/* Sum integers 1 to n */
int sumwhile(int n) {
    // Her skal jeg bruge en total variabel, som bruges til at gemme summen
    // igennem whileløkken.
    int total = 0;
    // While løkken kører så længe n != 0.
    while (n != 0) {
        total = total + n;
        n--;
    }
    return total;
}