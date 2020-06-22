  
#define BUTON 5

int Led [ ] = {22,23,24,25,26,27,28,29,30,31};

int Buton_durumu=1;


void setup() {
  
 pinMode(BUTON,INPUT);
                                        
    for(int i=0; i<10; i++) 
    
    {
    pinMode(Led [i], OUTPUT);
    }
  
}
 
void loop() {

 Buton_durumu = digitalRead(BUTON);
 
    if (Buton_durumu == 0)
    
    {  
        for (int Sayici =0; Sayici<10; Sayici++)
        
        {
        digitalWrite(Led [Sayici], HIGH);               
        delay(500);
        digitalWrite(Led [Sayici], LOW);
        delay (500);
        }
        
    }

}


                                                                              
                                                                                 
                                                                    
                                                        
