#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, hasil, modulus, menu;
    float c, d, hasilbagi;
    char kembali;

    {
    printf("\n\n\n");
    printf("\t\t\t\t           Praktikum Algoritma dan Pemrograman Modul I       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t===================== Program Kalkulator ====================\n");
    printf("\t\t\t\t====================== Oleh Kelompok 13 =====================\n");
    printf("\t\t\t\t-------------------------------------------------------------\n");
    printf("\t\t\t\t|                      ANGGOTA KELOMPOK:                     |\n");
    printf("\t\t\t\t|>>> I Made Widya Prajna Dharmajati           |  2205551080  |\n");
    printf("\t\t\t\t|>>> Sultan Alifatur Rozak                    |  2205551094  |\n");
    printf("\t\t\t\t|>>> I Komang Indra Pramana                   |  2205551095  |\n");
    printf("\t\t\t\t|>>> Sinta Purnama Dewi                       |  2205551100  |\n");
    printf("\t\t\t\t|>>> I Putu Fardeen Bagas Mahottama           |  2205551112  |\n");
    printf("\t\t\t\t|>>> Sang Kompiang Raynor Prabandana Kengetan |  2205551113  |\n");
    printf("\t\t\t\t--------------------------------------------------------------\n");
    printf("\t\t\t\t                Selamat menggunakan layanan kami.             \n");
    system ("pause");
    system ("cls");
    }

    kembali:
    printf("====================================\n");
    printf("        Program Kalkulator          \n");
    printf("====================================\n\n");
    printf("Pilih menu berikut untuk melanjutkan!\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");
    printf("\t5. Modulus\n\n");
    printf("Menu pilihan : ");
    scanf("%d",&menu);
    system ("cls");
    getchar();
    switch (menu){
      case 1:
        printf("====================================\n");
        printf("            PENJUMLAHAN             \n");
        printf("====================================\n");
        printf("\nMasukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a + b;
        printf("------------------------------- +\n");
        printf("Hasil\t\t\t = %d\n", hasil);
        break;
    case 2:
        printf("====================================\n");
        printf("            PENGURANGAN             \n");
        printf("====================================\n");
        printf("\nMasukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a - b;
        printf("------------------------------- -\n");
        printf("Hasil\t\t\t = %d\n", hasil);
        break;
    case 3:
        printf("====================================\n");
        printf("              PERKALIAN             \n");
        printf("====================================\n");
        printf("\nMasukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a * b;
        printf("------------------------------- x\n");
        printf("Hasil\t\t\t = %d\n", hasil);
        break;
    case 4:
        printf("====================================\n");
        printf("              PEMBAGIAN             \n");
        printf("====================================\n");
        printf("\nMasukan bilangan pertama : ");
        scanf("%f", &c);
        printf("Masukan bilangan kedua   : ");
        scanf("%f", &d);
        if (d == 0){
            printf("Bilangan tidak terdefinsikan.\n");
        }
        else{
            hasilbagi = c / d;
            printf("---------------------------- :\n");
            printf("Hasil\t\t\t = %.2f\n", hasilbagi);
        }
        break;
    case 5:
        printf("====================================\n");
        printf("               MODULUS              \n");
        printf("====================================\n");
        printf("\nMasukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        if (b == 0){
            printf("Bilangan tidak terdefinisikan.\n");
        }
        else{
            modulus = a%b;
            printf("--------------------------- mod\n");
            printf("Hasil\t\t\t = %d\n", modulus);
        }
        break;
      default:
        printf("Menu tidak tersedia.\n");
        break;
    }

    printf("\n\nIngin memilih menu lain? (y/n): ");
    scanf("%s", &kembali);
    if (kembali == 'y'){
        system ("cls");
        getchar();
        goto kembali;
    }
    else{
        system ("cls");
        printf("Terima kasih telah menggunakan layanan kami.\n\n");
        getchar();
    }
return 0;
}
