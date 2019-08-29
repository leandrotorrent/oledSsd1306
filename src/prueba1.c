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
	i2cInit(I2C0, OLED_I2C_RATE);

	SSD1306_Begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);


	// Show image buffer on the display hardware.
	// Since the buffer is intialized with an Adafruit splashscreen
	// internally, this will display the splashscreen.
	//SSD1306_Display();
	//delay(2000);

	// Clear the buffer.
	SSD1306_ClearDisplay();

	//char txt[15];
	SSD1306_DrawText(5, 10, "CESE Co9", 2);
	SSD1306_Display();
	SSD1306_DrawText(9, 35, "Co9", 2);
	SSD1306_Display();

	//char txt[15];
	SSD1306_DrawText(0, 55, "Protocolos", 1);
	SSD1306_Display();

	delay(4000);
	SSD1306_ClearDisplay();

	//char txt[15];
	SSD1306_DrawText(0, 20, "Sistema de\n\rMonitoreo\n\rAmbiental", 1);
	SSD1306_Display();
	delay(4000);
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
	//char txt[40];
	SSD1306_DrawText(8,10, "TORRENT", 1);
	SSD1306_Display();
	SSD1306_DrawText(25,30, "Y", 1);
	SSD1306_Display();
	SSD1306_DrawText(6,50, "DEL VALLE", 1);
	SSD1306_Display();

	/*
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

		//SSD1306_DrawPixel(10, 10, TRUE);
		//SSD1306_FillScreen(1);
		/*char txt[15];
		SSD1306_DrawText(0, 0, "Hello, world!", 1);*/
	}
	return 0;
}
