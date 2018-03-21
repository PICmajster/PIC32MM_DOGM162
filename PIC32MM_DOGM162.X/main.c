/*
    File Name:        :  main.c

    Device            :  PIC32MM0256GPM048
    Compiler          :  XC32 2.05
    MPLAB             :  MPLAB X 4.15
    Created by        :  http://strefapic.blogspot.com
*/

#include "mcc_generated_files/mcc.h"
#include "xc.h" /* wykrywa rodzaj procka i includuje odpowiedni plik naglowkowy "pic32mm0256gpm048.h"*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> /*deklaracje uint8_t itp*/

#include "delay.h"
#include "dogm162.h"

char napis2[] = "Kocham Monik""\x01"; /* "\x01" to zapis kodu ASCII dla zdefiniowanej
literki e z ogonkiem. Dla wlasnych znaków mamy zarezerwowane kody ASCII od 0 do 7,
przyczym aby uzywac podanego sposobu wstawiania w?asnych znaków w stringa, nie mozemy 
uzywac kodu ASCI 0, czyli zamiast 8 znaków korzystamy z 7 (od 1 do 7)*/
char napis1[] = "EA DOGM 162W-A";

int main(void)
{
    delayMs(50); /*stablizacja napiecia*/
    /*initialize the device*/
    SYSTEM_Initialize();

    /* When using interrupts, you need to set the Global Interrupt Enable bits
       Use the following macros to:

       Enable the Global Interrupts
       INTERRUPT_GlobalEnable();

       Disable the Global Interrupts
       INTERRUPT_GlobalDisable();*/
  
    WlaczLCD();             /*inicjalizacja wyswietlacza LCD*/
	WpiszSwojeZnaki();      /*wpisz do CGRAM-u definicje znaku e z ogonkiem*/
    UstawKursorLCD(1,2);
    WyswietlLCD(napis1);    /*wyswietl napis z tablicy napis1[]*/
    UstawKursorLCD(2,2);
    WyswietlLCD(napis2);    /*wyswietl napis z tablicy napis2[]*/
   
    while (1)
    {
       
    }
}

