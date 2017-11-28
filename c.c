#include <stdio.h>
int main() {
    int n1, n3, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n3);
    for(i=1; i <= n1 && i <= n3; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n3%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", n1, n3, gcd);
    return 0;
}
