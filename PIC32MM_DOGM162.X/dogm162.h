/*****************************************************************************
  FileName:        dogm162.h
  Processor:       PIC33MM0256GPM048
  Compiler:        XC32 ver 2.05
  IDE :            MPLABX-IDE 4.15
  Created by:      http://strefapic.blogspot.com
 ******************************************************************************/
#ifndef LCD_H
#define	LCD_H

/*Kierunek pinow*/
#define TRIS_RS      TRISBbits.TRISB10      
#define TRIS_E       TRISBbits.TRISB11  
#define TRIS_DB4     TRISCbits.TRISC3 
#define TRIS_DB5     TRISCbits.TRISC4
#define TRIS_DB6     TRISCbits.TRISC5
#define TRIS_DB7     TRISDbits.TRISD0
/*piny*/
#define RS           PORTBbits.RB10
#define E            PORTBbits.RB11
#define DB4          PORTCbits.RC3
#define DB5          PORTCbits.RC4
#define DB6          PORTCbits.RC5
#define DB7          PORTDbits.RD0

/* przyporzadkowanie adresow pamieci DD-RAM do pol wyswietlacza*/
#define LCD_Line1 0x00 /*adres 1 znaku 1 wiersza */
#define LCD_Line2 0x40 /*adres 1 znaku 2 wiersza */

 void Wyslij_do_LCD(unsigned char bajt);
 void WlaczLCD();
 void WyswietlLCD(char *napis);
 void lcd_int(uint16_t val);
 void UstawKursorLCD(uint8_t y, uint8_t x);
 void CzyscLCD();
 void WpiszSwojeZnaki(void);
#endif	/* LCD_H */

