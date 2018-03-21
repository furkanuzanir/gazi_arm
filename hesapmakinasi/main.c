#include <stdio.h>

int main(void)
{

    int islem,sayi1,sayi2,sonuc;
    char islem1;
    sonuc=0;
    printf("Ilk sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("Bir islem sec\n");
    printf("%t Toplama islemi icin:+ veya t/T\n");
            printf("Cikarma islemi icin:- veya c/C\n");
            printf("Bolme islemi icin: / veya b/B\n");
            printf("Carpma islemi icin : * veya r/R\n");
            printf("Girilecek islemi seciniz:");
            scanf("%s", &islem1);
            printf("Ikinci sayiyi giriniz:");
            scanf("%d",&sayi2);
            switch(islem1)
            {
             case '+':
                sonuc= sayi1+sayi2;
                break;

            case '-':
                 sonuc= sayi1-sayi2;
                break;
            case '*':
                sonuc= sayi1*sayi2;
                break;

            case '/':
                sonuc= sayi1/sayi2;
                break;
            case 'T':
               sonuc= sayi1+sayi2;
               break;

           case 'C':
                sonuc= sayi1-sayi2;
               break;
           case 'B':
               sonuc= sayi1*sayi2;
               break;

           case 'R':
               sonuc= sayi1/sayi2;
               break;
            case 't':
               sonuc= sayi1+sayi2;
               break;

           case 'c':
                sonuc= sayi1-sayi2;
               break;
           case 'r':
               sonuc= sayi1*sayi2;
               break;

           case 'b':
               sonuc= sayi1/sayi2;
               break;


            }

            printf("sonuc:%d\n",sonuc);
            return 0;

}
