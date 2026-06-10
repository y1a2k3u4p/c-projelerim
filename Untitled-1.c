#include <stdio.h>
#include <stdlib.h>
#define  deger 10
#define  soru(a,b) ((a)* (b))+ (a+deger)



int main() {


    fonksiyon();
    return 0;   
    
}
int fonksiyon()
{
    int a=5;
    int b=10;
    int sonuc = soru(a,(b+(deger)));
    if (sonuc > 100)
    {
        #define sonuc 100
    }
    else if (sonuc == 100){
        return sonuc;
    }
    else if (sonuc < 100){
       return fonksiyon2(deger);
    }
    

}
int fonksiyon2(x)
{

#define deger2 20

    if(deger2 > x)
        {
        
            int y = soru(deger2,soru(x,deger));
            printf("%d\n",y);

        } 
    
}
