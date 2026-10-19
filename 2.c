#include <stdio.h>

double chegirma(double price) {
    return price * 0.90; 
}

int main() {
    double prices[5];
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &prices[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%.0lf ", chegirma(prices[i]));
    }
    printf("\n");
    
    return 0;
}