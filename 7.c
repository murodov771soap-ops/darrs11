#include <stdio.h>

struct Mahsulot {
    char nomi[50];
    double narxi;
    int miqdori;
};

int main() {
    struct Mahsulot m;
    scanf("%s %lf %d", m.nomi, &m.narxi, &m.miqdori);
    
    printf("Mahsulot: %s\n", m.nomi);
    printf("Narxi: %.0lf\n", m.narxi);
    printf("Miqdori: %d\n", m.miqdori);
    printf("Ombor qiymati: %.0lf\n", m.narxi * m.miqdori);
    
    return 0;
}