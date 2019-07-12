#include <avr/io.h>
#include <util/delay.h>                
int main(void)
{
    // DDRB  |= _BV(0)|_BV(1);
    // PORTB |= _BV(0);
    // PORTB &= ~_BV(1);
    // DDRD  &= ~_BV(0);
    // PORTD |=  _BV(0);

    // while (1) 
    // {
    //     PORTB ^=_BV(0);
    //     PORTB ^=_BV(1);
        
    //     _delay_ms(200);
    // }
    DDRD |= 0xff;
    PORTD |= 0x01;
    bool flag = true;
    while (1)
    {
        
        for(int i = 0 ; i < 7 ; i++){
            PORTD = flag ?  PORTD << 1 : PORTD >> 1; 
        }
        PORTD = PORTD >>1;
        _delay_ms(200);
    }
    
}