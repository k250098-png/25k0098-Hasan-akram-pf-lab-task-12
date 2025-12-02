#include <stdio.h>
#include <stdlib.h>


int digital_root(int n) {
   
    if (n < 10) {
        return n;
    }

    int sum = 0;
    int temp_n = n;
    
    while (temp_n > 0) {
        sum += temp_n % 10;
        temp_n /= 10;
    }

    return digital_root(sum);
}

int main() {
    long long num;
    
    printf("Enter a non-negative integer: ");
    scanf("%lld", &num);
  
    int root = digital_root((int)num);
    printf("The digital root of %lld is %d\n", num, root);

    return 0;
}