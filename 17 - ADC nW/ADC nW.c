#include <mega32.h>
#include <delay.h>

#define ADC_VREF_TYPE ((0<<REFS1) | (0<<REFS0) | (0<<ADLAR))

#define adc_enable  ADCSRA = ADCSRA | 0b10000000  // ADEN = 1
#define adc_disable ADCSRA = ADCSRA & 0b01111111  // ADEN = 0

#define start_ADC_conversion ADCSR = ADCSRA | 0b01000000

#define wait_for_conversion  while((ADCSRA & 0b00010000) == 0)

int adc_value = 0;

int ADC_read(int adc_channel) {
    ADMUX = adc_channel;
    start_ADC_conversion;
    delay_us(10);
    wait_for_conversion;
    return ADCW;
}

void main(void)
{
ADMUX=ADC_VREF_TYPE;
ADCSRA=(0<<ADSC) | (0<<ADATE) | (0<<ADIF) | (0<<ADIE) | (0<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);
SFIOR=(0<<ADTS2) | (0<<ADTS1) | (0<<ADTS0);

adc_enable;

while (1)
      {
      // Place your code here
          //adc_value = read_adc(0);
          
          adc_value = ADC_read(1);
      }
}
