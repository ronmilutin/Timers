#ifndef BSP_H
#define BSP_H

#include  <MSP430FG4619.h>
#define   RAM              0x1100
#define   debounce_time    270
#define   debounceVal      270
#define   delay62_5ms      0xFFFF
#define   delay5ms         1750
#define   delay15ms        5250
#define   delay200us       700
#define   sec0             R15
#define   sec1             R14
#define   SCOPE            0x08

// LCD abstraction
#define LCDdata           &P5OUT
#define LCDdataDir        &P5DIR
#define LCDdataSel        &P5SEL
#define LCDconDir         &P3DIR
#define LCDconSel         &P3SEL
#define LCDcon            &P3OUT
#define LCDRS             0x20
#define LCDRW             0x40
#define LCDE              0x80

// PB abstraction
#define PB_SEL    &P2SEL
#define PB_DIR    &P2DIR
#define PB_IES    &P2IES
#define PB_IE     &P2IE
#define PB_IFG    &P2IFG
#define PB_PORT   &P2IN
#define OUTPUT    &P2OUT
#define PB0       0x01
#define PB1       0x02
#define PB3       0x04
#define PB4       0x08

// TIMER abstraction
// TIMER abstraction
#define Timercon         &TBCTL
#define Timer1con        &TBCTL
#define Timer1conCC2     &TBCCTL2
#define TimerAconC0      &TACCTL0
#define clockIFG         &TBIV
#define OverA            0x000E
#define TimerCCR2        &TBCCR2
#define TimerIFG         TBIFG
#define Timer0           TIMERA0_VECTOR
#define Timer1           TIMERB1_VECTOR
#define TimerSEL         TBSSEL_2
#define TimerIE          TBIE


#endif