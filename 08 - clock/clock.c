/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/14/2024
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 11.059200 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************************************************/

#include <mega32.h>
#include <delay.h>

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

#define delay_on 1
#define delay_off 0

#define databus PORTA
#define seg PORTC

#define seg_off PORTC = 0xff


char numbers[10] = {no_0, no_1, no_2, no_3, no_4, no_5, no_6, no_7, no_8, no_9};

void segment_display(char number, char segment, int status) {
    if(status == 0) {
        databus = numbers[number];
    } else {
        databus = numbers[number] + 0b10000000;
    }
    
    seg =~(1 << (segment - 1));
    delay_ms(delay_on);
    seg_off;
    delay_ms(delay_off);    
}

// Declare your global variables here
int s, m, h, k = 0;
int h1, h2, m1, m2, s1, s2;
void display() {
      segment_display(h1, 1, 0);
      segment_display(h2, 2, 1);
      segment_display(m1, 3, 0);
      segment_display(m2, 4, 1);
      segment_display(s1, 5, 0);
      segment_display(s2, 6, 0);
}

void main(void)
{
// Declare your local variables here
int last_val = 0;
// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRA=(1<<DDA7) | (1<<DDA6) | (1<<DDA5) | (1<<DDA4) | (1<<DDA3) | (1<<DDA2) | (1<<DDA1) | (1<<DDA0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port B initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (0<<DDB2) | (0<<DDB1) | (0<<DDB0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRC=(1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

DDRD = 0xff;

while (1)
      {
      // Place your code here
      
      if(PIND.0 == 1) {
            s = 0;
      }   
      if(PIND.1 == 1) {
            m ++;
            display();
      }
      if(PIND.2 == 1) {
            h ++;
            display();
      }               
      
      if((PINB.0 == 1) && (last_val == 0)) {
          k ++;   
          last_val = 1;
      }
      if(PINB.0 == 0) {
          last_val = 0;
      }
      if(k >= 5) {
          k = 0; 
          s ++;
      }
      
      if(s > 59) {
          s = 0; 
          m ++;
      } 
      
      if(m > 59) {
          m = 0; 
          h ++;
      }  
      
      if(h > 23) {
          h = 0; 
      }   
      
      
      h1 = h / 10;
      h2 = h % 10;
      
      m1 = m / 10;
      m2 = m % 10;

      s1 = s / 10;
      s2 = s % 10;   
      
      display();
      }
}
