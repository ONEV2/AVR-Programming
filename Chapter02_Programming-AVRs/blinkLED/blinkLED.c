                                                       /* Blinker Demo */

// ------- Preamble -------- //
#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                     /* Functions to waste time */

void on(void){
int i=0;
while(i<2){
PORTB = (1 << i);
_delay_ms(100);
i=i+1;
}
}
int main(void){
DDRB = 0b00000001;
while(1){
on();
}
return 0;
}
