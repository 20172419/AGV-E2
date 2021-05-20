/*
 */

#include <avr/io.h>

void init(void)
{
    DDRG &= ~(1<<PG1);//IR Sensor pin 40
    DDRG |= (1<<PG0);//Led displayshield pin 41
}

int main(void)
{
    init();

    // Insert code

    while(1)
    {
        if((PING & (1<<PG1)) == 0)
        {
            PORTG |= (1<<PG0);
        }
        else
        {
            PORTG &= ~(1<<PG0);
        }
    }
    return 0;
}
