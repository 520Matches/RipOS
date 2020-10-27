#include "../include/uart.h"

void kernel_main(void)
{
	uart_init();

	uart_send_string("hello\r\n");

	uart_send('s');
	uart_send('h');
	uart_send('d');
	// uart_send('\r\n');
	
	while(1)
	{
		char c = uart_recv();
		uart_send(c);
	}
}
