/*
 * codeProject1.c
 *
 * Created: 5/24/2019 5:51:18 AM
 * Author: Ali
 */

#include <io.h>
#include <mega32.h>
#include <delay.h>

void main(void)
{
    DDRC = 0xff;
    
    while (1)
        {  
            int i ;       
            int j;
            
            for(j = 20 ; j<200 ; j+=5){

                PORTC = 0x00;
                PORTC = 0x01;
                delay_ms(j);
                             
                PORTC = 0x00;
                PORTC = 0x02; 
                delay_ms(j); 
                
                PORTC = 0x00;
                PORTC = 0x04;
                delay_ms(j);
                
                PORTC = 0x00;
                PORTC = 0x08;
                delay_ms(j);  
                
                PORTC = 0x00;
                PORTC = 0x10;
                delay_ms(j); 
                
                PORTC = 0x00;
                PORTC = 0x20;
                delay_ms(j);
                
                PORTC = 0x00;
                PORTC = 0x40;
                delay_ms(j); 
                
                PORTC = 0x00;
                PORTC = 0x80;
                delay_ms(j);
                
                for(i = 0 ; i<3 ; i++){
                    PORTC = 0xff; 
                    delay_ms(50);  
                    PORTC = 0x00;
                }  
                
                PORTC = 0x00;
                PORTC = 0x80;
                delay_ms(j);
                
                PORTC = 0x00;
                PORTC = 0x40;
                delay_ms(j);
                
                PORTC = 0x00;
                PORTC = 0x20;
                delay_ms(j);
                
                PORTC = 0x00;
                PORTC = 0x10;
                delay_ms(j);  
                
                PORTC = 0x00;
                PORTC = 0x08;
                delay_ms(j);  
                
                PORTC = 0x00;
                PORTC = 0x04;
                delay_ms(j);   
                
                PORTC = 0x00;
                PORTC = 0x02; 
                delay_ms(j); 
                
                PORTC = 0x00;
                PORTC = 0x01;
                delay_ms(j);

                for(i = 0 ; i<3 ; i++){
                    PORTC = 0xff; 
                    delay_ms(50);  
                    PORTC = 0x00;
                }
            } 
        }
}
