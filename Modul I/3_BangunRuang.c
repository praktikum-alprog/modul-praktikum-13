#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 const float phi = 3.14;
 void tabung();
 void bola();
 void limas();
 void prisma();
 void kerucut();


 int main ()
 {
    {
    printf("\n\n\n");
    printf("\t\t\t\t           Praktikum Algoritma dan Pemrograman Modul I       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t==Program Menghitung Luas Permukaan dan Volume Bangun Ruang==\n");
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
    system ("pause");
    system ("cls");
    }
    int pil, kembali;
    menu:
    printf("=================================================\n");
    printf("=Program Menghitung Luas dan Volume Bangun Ruang=\n");
    printf("=================================================\n");

    printf("\t1. Tabung\n");
    printf("\t2. Bola\n");
    printf("\t3. Limas Segiempat\n");
    printf("\t4. Prisma Segitiga\n");
    printf("\t5. Kerucut\n");
    printf("\tMasukan Pilihan Anda(1-5) : ");
    scanf("%d", &pil);
    system("cls");

    printf("-------------------------------------------------\n");
    switch(pil)
    {
        case 1 : tabung();break;
        case 2 : bola();break;
        case 3 : limas();break;
        case 4 : prisma();break;
        case 5 : kerucut();break;
        system("cls");
    }
    printf("================================================\n");
    printf("Apa Anda Ingin Kembali Ke Menu?\n1. Ya\n2. Tidak\n");
    printf("pilihan Anda : ");
    scanf("%d", &kembali);
    system("cls");
    if(kembali == 1){
        system("cls");
        goto menu;
    }
    else{
        printf("================================================\n");
        printf("===Terimakasih Telah Menggunakan Program Kami===\n");
        printf("================================================\n");
        getchar();
        
    }

}

void tabung()
{
    int menghitung_volume, menghitung_luas,mulai_hitung;

    printf("\t===========Tabung==========\n");
    printf("\t1. Menghitung Volume Tabung\n");
    printf("\t2. Menghitung Luas Permukaan Tabung\n");
    printf("\tPilih Anda Ingin Menghitung Apa : ");
    scanf("%d", &mulai_hitung);

    if (mulai_hitung == 1 ){
        float r,v,t;
        printf("-------------------------------------------------\n");
        printf("\tmenghitung volume tabung\n");
        printf("\tmasukan : \n");
        printf("\tJari-Jari Alas : ");
        scanf("%f", &r);
        printf("\tTinggi Tabung : ");
        scanf("%f", &t);
        v = phi*pow(r,2)*t;
        printf("\tVolume Tabung = %.2f\n", v);


    } else if(mulai_hitung == 2 ){
        float r,t,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Tabung\n");
        printf("\tMasukan : \n");
        printf("\tJari-Jari Alas : ");
        scanf("%f", &r);
        printf("\tTinggi Tabung : ");
        scanf("%f", &t);
        l = (2*phi*pow(r,2)+(2*phi*r*t));
        printf("\tLuas Permukaan Tabung = %.2f\n", l);

    }
}

void bola()
{
    int menghitung_volume, menghitung_luas,mulai_hitung;

    printf("\t===========Bola==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : ");
    scanf("%d", &mulai_hitung);

    if(mulai_hitung == 1){
        float r,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Bola\n");
        printf("\tMasukan : \n");
        printf("\tJari-Jari Bola : ");
        scanf("%f", &r);
        v = 4*phi*pow(r,3)/3;
        printf("\tVolume Bola = %.2f\n", v);
    }else if(mulai_hitung == 2){
        float r,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Bola\n");
        printf("\tMasukan : \n");
        printf("\tJari-Jari Bola : ");
        scanf("%f", &r);
        l = 4*phi*pow(r,2);
        printf("\tLuas Permukaan Bola = %.2f\n", l);
    }
}

void limas()
{
    int menghitung_volume, menghitung_luas,mulai_hitung;

    printf("\t===========Limas Segiempat==========\n");
    printf("\t1. Menghitung Vaolume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : ");
    scanf("%d", &mulai_hitung);

    if(mulai_hitung == 1){
        float a,t,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Limas Segiempat\n");
        printf("\tMasukan : \n");
        printf("\tLuas Alas : ");
        scanf("%f", &a);
        printf("\tTinggi Limas : ");
        scanf("%f", &t);
        v = (a*t)/3;
        printf("\tVolume Limas Segiempat = %f\n", v);
    }else if(mulai_hitung == 2){
        float a,t,s,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan\n");
        printf("\tMasukan : \n");
        printf("\tLuas Alas : ");
        scanf("%f", &a);
        printf("\tTinggi Limas : ");
        scanf("%f", &t);
        printf("\tLuas Sisi Tegak : ");
        scanf("%f", &s);
        l = (a*t)/2 + (3*s);
        printf("\tLuas Permukaan Limas Segiempat = %f\n", l);
    }
}

void prisma()
{
    int menghitung_volume, menghitung_luas,mulai_hitung;

    printf("\t===========Prisma Segitiga==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : ");
    scanf("%d", &mulai_hitung);

    if(mulai_hitung == 1){
        float la,t,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Prisma Segitiga\n");
        printf("\tmasukan : \n");
        printf("\tLuas Alas : ");
        scanf("%f", &la);
        printf("\tTinggi Prisma : ");
        scanf("%f", &t);
        v = (la*t);
        printf("\tVolume Prisma Segitiga = %.2f\n", v);
    }else if(mulai_hitung == 2){
        float la,t,ka,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Prisma Segitiga\n");
        printf("\tMasukan : \n");
        printf("\tLuas Alas : ");
        scanf("%f", &la);
        printf("\tTinggi Limas : ");
        scanf("%f", &t);
        printf("\tKeliling Alas : ");
        scanf("%f", &ka);
        l = (2*la) + (ka*t);
        printf("\tLuas Permukaan Prisma Segitiga = %.2f\n", l);
    }
}

void kerucut()
{
    int menghitung_volume, menghitung_luas,mulai_hitung;

    printf("\t===========Kerucut==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : ");
    scanf("%d", &mulai_hitung);

    if(mulai_hitung == 1){
        float r,tk,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Kerucut\n");
        printf("\tMasukan : \n");
        printf("\tJari-Jari Kerucut : ");
        scanf("%f", &r);
        printf("\tTinggi Kerucut : ");
        scanf("%f", &tk);
        v = phi*pow(r,2)*tk/3;
        printf("\tVolume Kerucut = %.2f\n", v);
        
    }else if(mulai_hitung == 2){
        float r,s,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Kerucut\n");
        printf("\tMasukan : \n");
        printf("\tJari-Jari Kerucut : ");
        scanf("%f", &r);
        printf("\tGaris Pelukis : ");
        scanf("%f", &s);
        l = phi*r * (r+s);
        printf("\tLuas Permukaan Kerucut = %.2f\n", l);
    }
}