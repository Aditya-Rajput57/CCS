#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int modInverse(int e, int fi) {
    int d = 1;
    while ((d * e) % fi != 1) {
        d++;
    }
    return d;
}

long long powerMod(long long base, int exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        result = (result * base) % mod;
        exp--;
    }
    return result;
}

int main() {
    int p, q, n, e = 7, fi, d, M, C;
    
    printf("Enter your Prime Number 1st: ");
    scanf("%d", &p);

    printf("Enter your Prime Number 2nd: ");
    scanf("%d", &q);

    

    n = p * q;
    printf("Your n is %d\n", n);

    fi = (p - 1) * (q - 1);
    printf("Your fi is %d\n", fi);

    if (gcd(e, fi) != 1) {
        printf("Chosen e is not valid, choose another prime e.\n");
        return 1;
    }
    
    d = modInverse(e, fi);
    printf("Your private key (d) is %d\n", d);

    printf("Enter the message (M) to encrypt: ");
    scanf("%d", &M);

    if (M >= n) {
        printf("Message should be smaller than n.\n");
        return 1;
    }

    C = powerMod(M, e, n);
    printf("Your encrypted message (C) is: %d\n", C);

    M = powerMod(C, d, n);
    printf("Your decrypted message (M) is: %d\n", M);

    return 0;
}
