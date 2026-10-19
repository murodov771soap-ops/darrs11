#include <stdio.h>

int main() {
    FILE *file = fopen("xaridlar.txt", "r");
    if (file == NULL) {
        return 1;
    }
    
    int count = 0;
    double price;
    while (fscanf(file, "%lf", &price) != EOF) {
        if (price > 50000) {
            count++;
        }
    }
    
    fclose(file);
    printf("Katta xaridlar soni: %d\n", count);
    
    return 0;
}