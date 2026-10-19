#include <stdio.h>

struct Xodim {
    char ismi[50];
    int soat;
};

int main() {
    FILE *file = fopen("xodimlar.txt", "r");
    if (file == NULL) {
        return 1;
    }
    
    int n;
    fscanf(file, "%d", &n);
    
    struct Xodim xodimlar[n];
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %d", xodimlar[i].ismi, &xodimlar[i].soat);
    }
    fclose(file);
    
    for (int i = 0; i < n; i++) {
        printf("%s: %d som\n", xodimlar[i].ismi, xodimlar[i].soat * 15000);
    }
    
    return 0;
}