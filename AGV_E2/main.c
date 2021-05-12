/*
 */

#include <avr/io.h>

void init(void)
{
    DDRC &= ~(1<<PC6);//IR Sensor pin 31
    DDRB |= (1<<PB7);//Led displayshield PB7

}

int main(void)
{
    init();

    // Insert code

    while(1)
    {
        if((PINC & (1<<PC6))==0)
        {
            PORTB |= (1<<PB7);

        }else{
        PORTB &= ~(1<<PB7);
        }

    }


    return 0;
}
