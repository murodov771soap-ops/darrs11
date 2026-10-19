#include <stdio.h>

void countdown(int n) {
    if (n < 1) {
        printf("Xabar yuborildi!\n");
        return;
    }
    printf("%d\n", n);
    countdown(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    countdown(n);
    return 0;
}