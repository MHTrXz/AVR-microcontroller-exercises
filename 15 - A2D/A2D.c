/*
 * A2D.c
 *
 * Created: 6/15/2024 5:02:12 PM
 * Author: MHTrXz
 */

#include <io.h>
#include <math.h>
#include <delay.h>
#include <alcd.h>
#include <stdio.h>

#define output PORTA

char no = 0;
char str[32];

void main(void)
{

lcd_init(16);
lcd_clear();

DDRA = 0xff;
DDRD.0 = 0;
while (1)
    {
    // Please write your application code here
        output = no;
        if(PIND.0 != 1){
            no ++;
        } else {
            sprintf(str, "%d", no);
            lcd_gotoxy(0, 0);
            lcd_puts(str);
        }
        delay_ms(1);
    }
}
