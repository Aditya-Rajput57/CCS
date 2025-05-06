#include <stdio.h>
#include <math.h>

int main()
{
    int p, xa, xb, ya, yb, g = 3, PR = 3, s1, s2;

    printf("Enter your Prime Number: ");
    scanf("%d", &p);

    printf("\nEnter your Xa: ");
    scanf("%d", &xa);

    printf("\nEnter your Xb: ");
    scanf("%d", &xb);

    printf("\nEnter your primitive Root: ");
    scanf("%d", &PR);
    
    if(xa<p)
    {
        printf("Your number is accepted");
        
        ya = (int)pow(g, xa) % p;
    printf("\nYour Ya is %d", ya);

    yb = (int)pow(g, xb) % p;
    printf("\nYour Yb is %d", yb);

    s1 = (int)pow(yb, xa) % p;
    printf("\nYour Shared Key is %d", s1);

    s2 = (int)pow(ya, xb) % p;
    printf("\nYour Shared Key is %d", s2);

    return 0;
    }
    else{
        printf("Your number is not accepted");

    }

    
}
