// 12S25034 - Ignacia Manurung
  
#include <stdio.h>

int main(int _argv, char **_argc)
{
    int jumlah_buku;
    double harga_buku, total_harga, potongan, total_bayar;

    scanf("%d", &jumlah_buku);
    scanf("%lf", &harga_buku);

    total_harga = jumlah_buku * harga_buku;

    if (total_harga > 500000) {
        potongan = total_harga * 0.15;
    } else if (total_harga >= 100000) {
        potongan = total_harga * 0.10;
    } else if (total_harga > 50000) {
        potongan = total_harga * 0.05;
    } else {
        potongan = 0.0;
    }

    total_bayar = total_harga - potongan;

    if (potongan == 0.0) {
        printf("---\n");
    } else {
        printf("%.2lf\n", potongan);
    }
    
    printf("%.2lf\n", total_bayar);

    return 0;
}