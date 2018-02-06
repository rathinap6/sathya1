#include <stdio.h>
void main()
{
    int n, rev = 0, rem, a;

    printf("Enter an integer: ");
    scanf("%d", &n);

    a = n;
    while( n!=0 )
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if (a== rev)
        printf("%d is a palindrome.",a);
    else
        printf("%d is not a palindrome.",a);
}
