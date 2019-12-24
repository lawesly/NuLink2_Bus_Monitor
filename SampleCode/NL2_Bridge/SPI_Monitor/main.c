#include <stdio.h>
#include "hal_api.h"

int main()
{
    SYS_Init_192MHZ();
    UART_Init(UART2, 921600);
    SPI12_Monitor_Init();

    while (1) {
        SPI12_Monitor_printf();
    }
    // warning:  #111-D: statement is unreachable
    // return 0;
}
