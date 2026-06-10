#include <stdio.h>
#include <stdlib.h>

#define deger 10
#define soru(a,b) ((a)* (b))+ (a+deger)

// Sıkıntı A Çözümü: Fonksiyon prototiplerini önden bildirdik
int fonksiyon();
int fonksiyon2(int x); // Sıkıntı B Çözümü: int x olarak tip belirttik

int main() {
    fonksiyon();
    printf("Program sonlandi.\n");
    return 0;   
}

int fonksiyon() {
    int a = 5;
    int b = 10;
    int sonuc = soru(a, (b + deger)); // sonuc = 115 çıkacak
    
    if (sonuc > 100) {
        // Sıkıntı C Çözümü: Makro yerine normal atama yaptık
        sonuc = 100; 
        return sonuc; // Fonksiyonun int dönebilmesi için return ekledik
    }
    else if (sonuc == 100) {
        return sonuc;
    }
    else if (sonuc < 100) {
       return fonksiyon2(deger);
    }
    return 0;
}

int fonksiyon2(int x) {
    // #define deger2 20 blok içinde tanımlanabilir ama genel kural olarak yukarı yazılır.
    // Yine de burada kalmasında teknik bir engel yoktur.
    #define deger2 20 

    if(deger2 > x) { // 20 > 10 olduğu için içeri girer
        // soru(10, 10) -> ((10)*(10)) + (10+10) = 100 + 20 = 120
        // soru(20, 120) -> ((20)*(120)) + (20+10) = 2400 + 30 = 2430
        int y = soru(deger2, soru(x, deger));
        printf("%d\n", y);
    }
    printf("%d\n", x);
    return 0;
}