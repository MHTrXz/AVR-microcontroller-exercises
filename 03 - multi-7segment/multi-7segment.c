/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/14/2024
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 2.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>
#include <delay.h>
// Declare your global variables here

#define no_0 0b00111111 // 0
#define no_1 0b00000110 // 1
#define no_2 0b01011011 // 2 
#define no_3 0b01001111 // 3 
#define no_4 0b01100110 // 4
#define no_5 0b01101101 // 5
#define no_6 0b01111101 // 6
#define no_7 0b00000111 // 7
#define no_8 0b01111111 // 8
#define no_9 0b01101111 // 9

#define delay 10

#define seg_1 PORTC.0 = 0
#define seg_2 PORTC.1 = 0
#define seg_3 PORTC.2 = 0
#define seg_4 PORTC.3 = 0

#define databus PORTA

#define seg_off PORTC = 0xff

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRA=(1<<DDA7) | (1<<DDA6) | (1<<DDA5) | (1<<DDA4) | (1<<DDA3) | (1<<DDA2) | (1<<DDA1) | (1<<DDA0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port C initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRC=(1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

seg_off;

while (1)
      {
      // Place your code here
            
            databus = no_0; // 0 
            seg_1;
            delay_ms(delay);  
            seg_off;
            
            databus = no_1; // 1
            seg_2;
            delay_ms(delay);  
            seg_off;
            
            databus = no_2; // 2 
            seg_3;
            delay_ms(delay);  
            seg_off;  
            
            databus = no_3; // 3 
            seg_4;
            delay_ms(delay);  
            seg_off;
            
            databus = no_4; // 4 
            seg_1;
            delay_ms(delay);  
            seg_off;
            
            databus = no_5; // 5 
            seg_2;
            delay_ms(delay);  
            seg_off; 
            
            databus = no_6; // 6 
            seg_3;
            delay_ms(delay);  
            seg_off;
            
            databus = no_7; // 7 
            seg_4;
            delay_ms(delay);  
            seg_off; 
                 
            databus = no_8; // 8
            seg_1;
            delay_ms(delay);  
            seg_off;
            
            databus = no_9; // 9
            seg_2;
            delay_ms(delay);  
            seg_off; 
            
            databus = no_0; // 0 
            seg_3;
            delay_ms(delay);  
            seg_off;
            
            databus = no_1; // 1
            seg_4;
            delay_ms(delay);  
            seg_off; 
            
            databus = no_2; // 2 
            seg_1;
            delay_ms(delay);  
            seg_off;
            
            databus = no_3; // 3 
            seg_2;
            delay_ms(delay);  
            seg_off; 
            
            databus = no_4; // 4 
            seg_3;
            delay_ms(delay);  
            seg_off;
            
            databus = no_5; // 5 
            seg_4;
            delay_ms(delay);  
            seg_off; 
            
            databus = no_6; // 6 
            seg_1;
            delay_ms(delay);  
            seg_off;
            
            databus = no_7; // 7 
            seg_2;
            delay_ms(delay);  
            seg_off; 
            
            databus = no_8; // 8
            seg_3;
            delay_ms(delay);  
            seg_off;
            
            databus = no_9; // 9 
            seg_4;
            delay_ms(delay);  
            seg_off; 
      }
}
