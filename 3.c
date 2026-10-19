#include <stdio.h>

void almashtir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    almashtir(&x, &y);
    
    printf("a = %d\nb = %d\n", x, y);
    
    return 0;
}