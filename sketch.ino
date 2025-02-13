#include <avr/io.h>
#include <util/delay.h>

void ExternalInterupts_init()
{
  //failling edge
  EICRA |= (1<<ISC01);
  EIMSK |= (1<<INT0);

  //wlaczenie przerwań 
  sei();
}

void ADC_init()
{
  //zasilanie
  ADMUX |= (1<<REFS0);
  ADMUX &= ~(1<<REFS1);

  //division factor
  ADCSRA |= (1<<ADPS0);
  ADCSRA |= (1<<ADPS1);
  ADCSRA |= (1<<ADPS2);

  //włączenie przerwan
  ADCSRA |= (1<<ADIE);
  
  //włączenie ADC
  ADCSRA |= (1<<ADEN);
}

int channelA0()
{
  //kanał A0
  ADMUX &= ~(1<<MUX0);
  ADMUX &= ~(1<<MUX1);
  ADMUX &= ~(1<<MUX2);
  ADMUX &= ~(1<<MUX3);

  ADCSRA |= (1 << ADSC);
  
  while(ADCSRA & (1<<ADSC))
  {}

  //zwracanie zmierzonego napięcia
  return ADC;
}

int main()
{
  ADC_init();

  //diody
  DDRD |= (1<<PD5);
  DDRD |= (1<<PD3);
  DDRD |= (1<<PD4);

  PORTD &= ~(1<<PD5);
  PORTD &= ~(1<<PD3);
  PORTD &= ~(1<<PD4);

  //switch - pull-up
  DDRD &= ~(1<<PD2);
  PORTD |= (1<<PD2);

  ExternalInterupts_init();
  
  while(1)
  {}

  return 0;
}

ISR(ADC_vect)
{
  int resultA0 = channelA0();
  float napiecieA0 = resultA0*5.0/1023.0;
    
    if(napiecieA0 > 1.0)
    {
      PORTD |= (1<<PD5);
    }
    else
    {
      PORTD &= ~(1<<PD5);
    }
  
   
    if(napiecieA0 > 2.5)
    {
      PORTD |= (1<<PD4);
    }
    else
    {
      PORTD &= ~(1<<PD4);
    }
   
    
    if(napiecieA0 > 4.0)
    {
      PORTD |= (1<<PD3);
    }
    else
    {
      PORTD &= ~(1<<PD3);
    }

}
