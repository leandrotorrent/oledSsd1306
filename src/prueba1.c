/*==================[inclusions]=============================================*/

#include "sapi.h"        // <= sAPI header

#include "oled.h"
#include "testoled.h"
//#define OLED_ADDR 0x3C
// I2C baudrate
#define OLED_I2C_RATE              400000 // 400 kHz


int main(void) {

	/* ------------- INICIALIZACIONES ------------- */

	/* Inicializar la placa */
	boardConfig();
	i2cInit( I2C0 , OLED_I2C_RATE );
	/*if()){
	gpioWrite( LED1, ON );
	}
	else gpioWrite( LED1, ON );*/
	SSD1306_Begin(SSD1306_SWITCHCAPVCC , SSD1306_I2C_ADDRESS);


	// Show image buffer on the display hardware.
	// Since the buffer is intialized with an Adafruit splashscreen
	// internally, this will display the splashscreen.
	//SSD1306_Display();
	//delay(2000);

	// Clear the buffer.
	SSD1306_ClearDisplay();

	//char txt[15];
	SSD1306_DrawText(36, 5, "CESE", 2);

	SSD1306_DrawText(40, 25, "Co9", 2);


	//char txt[15];
	SSD1306_DrawText(10, 45, "Protocolos", 2);
	SSD1306_Display();

	delay(3000);
	SSD1306_ClearDisplay();

	//char txt[15];
	SSD1306_DrawText(37, 20, "Sistema de", 1);
	SSD1306_DrawText(39, 30, "Monitoreo", 1);
	SSD1306_DrawText(39, 40, "Ambiental", 1);
	SSD1306_Display();
	SSD1306_StartScrollRight(0x00, 0x0F);
	delay(8000);
	SSD1306_StopScroll();
	//delay(4000);
	SSD1306_ClearDisplay();

	//draw a single pixel
	//SSD1306_DrawPixel(10, 10, TRUE);
	// Show the display buffer on the hardware.
	// NOTE: You _must_ call SSD1306_Display() after making any drawing commands
	// to make them visible on the display hardware!
	/* SSD1306_Display();
	delay(2000);
	SSD1306_ClearDisplay();

	// SSD1306_Print("Holo");

	// draw many lines
	testdrawline();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  // draw rectangles
	  testdrawrect();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  // draw multiple rectangles
	  testfillrect();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  // draw mulitple circles
	  testdrawcircle();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  // draw a white circle, 10 pixel radius
	  SSD1306_FillCircle(SSD1306_LCDWIDTH/2, SSD1306_LCDHEIGHT/2, 10, TRUE);
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  testdrawroundrect();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  testfillroundrect();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  testdrawtriangle();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  testfilltriangle();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();

	  // draw scrolling text
	  testscrolltext();
	  SSD1306_Display();
	  delay(2000);
	  SSD1306_ClearDisplay();*/

	//text display tests

	SSD1306_DrawText(0,10, "Autores:\r\n\n* Miguel del Valle\r\n\n* Leandro Torrent", 1);
	SSD1306_Display();
	//SSD1306_Display();
	delay(2000);
	SSD1306_ClearDisplay();

	/*char txt[40];
	 sprintf(txt, "%.6f", 3.141592);
	  SSD1306_DrawText(2, 16, txt, 1);

	  SSD1306_DrawText(2, 26, "0x", 2);

	  sprintf(txt, "%LX", 0xDEADBEEF);
	  SSD1306_DrawText(26, 26, txt, 2);
	  SSD1306_Display();
	  delay(2000);*/


	/* ------------- REPETIR POR SIEMPRE ------------- */
	while (1) {
		//SSD1306_Display();
		//
		SSD1306_DrawText(0,10, "Temp: \r\n\ Humedad: \r\nPresion:\r\n\ Humo:\r\n\ " , 1);
		SSD1306_Display();
	}
	return 0;
}
