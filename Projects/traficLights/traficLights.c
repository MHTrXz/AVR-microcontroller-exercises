/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/15/2024
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
// Alphanumeric LCD functions
#include <alcd.h>
#include <stdio.h>

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

#define ano_0 ~no_0 // 0
#define ano_1 ~no_1 // 1
#define ano_2 ~no_2 // 2 
#define ano_3 ~no_3 // 3 
#define ano_4 ~no_4 // 4
#define ano_5 ~no_5 // 5
#define ano_6 ~no_6 // 6
#define ano_7 ~no_7 // 7
#define ano_8 ~no_8 // 8
#define ano_9 ~no_9 // 9

void main(void)
{
// Declare your local variables here
int k, l, i, j;
char str[32];
// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRA=(1<<DDA7) | (1<<DDA6) | (1<<DDA5) | (1<<DDA4) | (1<<DDA3) | (1<<DDA2) | (1<<DDA1) | (1<<DDA0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port B initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRB=(1<<DDB7) | (1<<DDB6) | (1<<DDB5) | (1<<DDB4) | (1<<DDB3) | (1<<DDB2) | (1<<DDB1) | (1<<DDB0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=In Bit6=In Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRC=(0<<DDC7) | (0<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);
// State: Bit7=T Bit6=T Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

// Port D initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=In Bit2=In Bit1=Out Bit0=Out 
DDRD=(1<<DDD7) | (1<<DDD6) | (1<<DDD5) | (1<<DDD4) | (0<<DDD3) | (0<<DDD2) | (1<<DDD1) | (1<<DDD0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=T Bit2=T Bit1=0 Bit0=0 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
// Mode: Normal top=0xFF
// OC0 output: Disconnected
TCCR0=(0<<WGM00) | (0<<COM01) | (0<<COM00) | (0<<WGM01) | (0<<CS02) | (0<<CS01) | (0<<CS00);
TCNT0=0x00;
OCR0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer1 Stopped
// Mode: Normal top=0xFFFF
// OC1A output: Disconnected
// OC1B output: Disconnected
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=(0<<COM1A1) | (0<<COM1A0) | (0<<COM1B1) | (0<<COM1B0) | (0<<WGM11) | (0<<WGM10);
TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (0<<CS12) | (0<<CS11) | (0<<CS10);
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer2 Stopped
// Mode: Normal top=0xFF
// OC2 output: Disconnected
ASSR=0<<AS2;
TCCR2=(0<<PWM2) | (0<<COM21) | (0<<COM20) | (0<<CTC2) | (0<<CS22) | (0<<CS21) | (0<<CS20);
TCNT2=0x00;
OCR2=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=(0<<OCIE2) | (0<<TOIE2) | (0<<TICIE1) | (0<<OCIE1A) | (0<<OCIE1B) | (0<<TOIE1) | (0<<OCIE0) | (0<<TOIE0);

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
// INT2: Off
MCUCR=(0<<ISC11) | (0<<ISC10) | (0<<ISC01) | (0<<ISC00);
MCUCSR=(0<<ISC2);

// USART initialization
// USART disabled
UCSRB=(0<<RXCIE) | (0<<TXCIE) | (0<<UDRIE) | (0<<RXEN) | (0<<TXEN) | (0<<UCSZ2) | (0<<RXB8) | (0<<TXB8);

// Analog Comparator initialization
// Analog Comparator: Off
// The Analog Comparator's positive input is
// connected to the AIN0 pin
// The Analog Comparator's negative input is
// connected to the AIN1 pin
ACSR=(1<<ACD) | (0<<ACBG) | (0<<ACO) | (0<<ACI) | (0<<ACIE) | (0<<ACIC) | (0<<ACIS1) | (0<<ACIS0);
SFIOR=(0<<ACME);

// ADC initialization
// ADC disabled
ADCSRA=(0<<ADEN) | (0<<ADSC) | (0<<ADATE) | (0<<ADIF) | (0<<ADIE) | (0<<ADPS2) | (0<<ADPS1) | (0<<ADPS0);

// SPI initialization
// SPI disabled
SPCR=(0<<SPIE) | (0<<SPE) | (0<<DORD) | (0<<MSTR) | (0<<CPOL) | (0<<CPHA) | (0<<SPR1) | (0<<SPR0);

// TWI initialization
// TWI disabled
TWCR=(0<<TWEA) | (0<<TWSTA) | (0<<TWSTO) | (0<<TWEN) | (0<<TWIE);

// Alphanumeric LCD initialization
// Connections are specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS - PORTD Bit 0
// RD - PORTD Bit 2
// EN - PORTD Bit 1
// D4 - PORTD Bit 4
// D5 - PORTD Bit 5
// D6 - PORTD Bit 6
// D7 - PORTD Bit 7
// Characters/line: 20
lcd_init(20);

lcd_clear();
lcd_gotoxy(3, 0);
lcd_puts("Traffic Lights");
lcd_gotoxy(5, 1);
lcd_puts("4022362143");
lcd_gotoxy(5, 2);
lcd_puts("4003623035");
lcd_gotoxy(0, 3);
lcd_puts("PINS:4f");

k = 0;
l = 0;

PORTB.2 = 1;
PORTB.5 = 1;
PORTC.0 = 1;
PORTC.3 = 1;

while (1)
      {
      
            lcd_gotoxy(11, 3);
            sprintf(str, "status:L%d", k + 1);
            lcd_puts(str);
            
            if(l == 3) {
                l = 0;
                k ++;
            }
            if(k == 4) {
                k = 0;
            }
            
            if (k == 0) {
                if (l == 0) {
                    PORTB.2 = 0;
                    PORTB.3 = 0;
                    PORTB.4 = 1;
                } else if (l == 1) {
                    PORTB.2 = 0;
                    PORTB.3 = 1;
                    PORTB.4 = 0;
                } else {
                    PORTB.2 = 1;
                    PORTB.3 = 0;
                    PORTB.4 = 0;
                }
            } else if (k == 1) {
                if (l == 0) {
                    PORTB.5 = 0;
                    PORTB.6 = 0;
                    PORTB.7 = 0;
                } else if (l == 1) {
                    PORTB.5 = 0;
                    PORTB.6 = 1;
                    PORTB.7 = 0;
                } else {
                    PORTB.5 = 1;
                    PORTB.6 = 0;
                    PORTB.7 = 0;
                }
            } else if (k == 2) {
                if (l == 0) {
                    PORTC.0 = 0;
                    PORTC.1 = 0;
                    PORTC.2 = 1;
                } else if (l == 1) {
                    PORTC.0 = 0;
                    PORTC.1 = 1;
                    PORTC.2 = 0;
                } else {
                    PORTC.0 = 1;
                    PORTC.1 = 0;
                    PORTC.2 = 0;
                }
            } else {
                if (l == 0) {
                    PORTC.3 = 0;
                    PORTC.4 = 0;
                    PORTC.5 = 1;
                } else if (l == 1) {
                    PORTC.3 = 0;
                    PORTC.4 = 1;
                    PORTC.5 = 0;
                } else {
                    PORTC.3 = 1;
                    PORTC.4 = 0;
                    PORTC.5 = 0;
                }
            }
             
            l ++;
            
            for(j = 0; j < 10000; j ++) {
                for(i = 0; i < 8; i ++) {
                    if (i == 0) {
                            PORTA = ano_0;
                    
                            PORTA.7 = 0;
                            PORTB.0 = 0;
                            PORTB.1 = 0;
                            
                    } else if (i == 1) {
                            PORTA = ano_0;
                    
                            PORTA.7 = 0;
                            PORTB.0 = 0;
                            PORTB.1 = 1;
                            
                    } else if (i == 2) {
                            PORTA = ano_0;
                    
                            PORTA.7 = 0;
                            PORTB.0 = 1;
                            PORTB.1 = 0;
                            
                    } else if (i == 3) {
                            PORTA = ano_0;
                    
                            PORTA.7 = 0;
                            PORTB.0 = 1;
                            PORTB.1 = 1; 
                            
                    } else if (i == 4) {
                            PORTA = ano_0;
                            PORTA.7 = 1;
                            PORTB.0 = 0;
                            PORTB.1 = 0;
                            
                    } else if (i == 5) {
                            PORTA = ano_0;
                            PORTA.7 = 1;
                            PORTB.0 = 0;
                            PORTB.1 = 1;
                            
                    } else if (i == 6) {
                            PORTA = ano_0;
                            PORTA.7 = 1;
                            PORTB.0 = 1;
                            PORTB.1 = 0;
                            
                    } else if (i == 7) { 
                            PORTA = ano_0;
                            PORTA.7 = 1;
                            PORTB.0 = 1;
                            PORTB.1 = 1;  
                    } 
                } 
            }

      }
}
