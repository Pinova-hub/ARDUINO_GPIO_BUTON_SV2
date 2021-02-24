  
#define BUTON 5                                             //BUTON değşkeni ve bağlı olduğu pin tanımlanır

int Led [ ] = {22,23,24,25,26,27,28,29,30,31};              //10 adet LED ve bağlı olduğu pinler, Led değişkeni ile dizi şeklinde tanımlanır

int Buton_durumu=1;                                         //Buton_durumu tanımlanır ve butonun başlangıçtaki dijital durumu değişkene atanır(Butonlar pull-up bağlıolduğundan başlangıçtaki dijital udurmları 1'dir. Pull-down buton kullanılması durumunda başlangıçtaki dijital durumu 0 olarak girilmelidir)
  


void setup() {
    
 pinMode(BUTON,INPUT);                                      //BUTON'a giriş verilir                   
                                        
    for(int i=0; i<10; i++)                                 // i değişkeni ve başlangıç değeri tanımlanır. i değişkeni 0'dan başlayarak her seferinde 1 artırılır ve en son 9 değerini alıncaya kadar for döngüsü tekrar edilir. 
    
    {
    pinMode(Led [i], OUTPUT);                               //10 adet LED'e i değişkeni kullanılarak çıkış verilir
    }
  
}
 
void loop() {

 Buton_durumu = digitalRead(BUTON);                         //Butona basılı olup olmadığı dijital olarak okunarak kontrol edilir ve durumu Buton_durumu değişkenine atanır
 
    if (Buton_durumu == 0)                                  //Buton basılıysa
    
    {  
        for (int Sayici =0; Sayici<10; Sayici++)            //Sayici değişkeni ve başlangıç değeri tanımlanır. Sayici değişkeni 0'dan başlayarak her seferinde 1 artırılır ve en son 9 değerini alıncaya kadar for döngüsü tekrar edilir. 
        
        {
        digitalWrite(Led [Sayici], HIGH);                  //Sayici değişkeni yardımıyla 10 adet LED'e sırayla dijital 1 (5V) verilir, LED yakılır           
        delay(500);                                        //500 milisaniye bekleme süresi eklenir
        digitalWrite(Led [Sayici], LOW);                   //Sayici değişkeni yardımıyla 10 adet LED'e sırayla dijital 0 (0V) verilir, LED söndürülür
        delay (500);                                       //500 milisaniye bekleme süresi eklenir
        }
        
    }

}


                                                                              
                                                                                 
                                                                    
                                                        
