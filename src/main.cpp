/**
 * Copyright (C) PlatformIO <contact@platformio.org>
 * See LICENSE for details.
 */

#include <avr/io.h>
#include <util/delay.h>
#include <Test.h>



int main(void)
    {
    // make the LED pin an output for PORTB5
    DDRB = 1 << 5;
    Test test;
    test.sum(5,5);

    while (1)
    {
        _delay_ms(2000);

        // toggle the LED
        PORTA ^= 1 << 7;
    }

    return 0;
}
