//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  接5V或3.3v电源
//              D0   P1^4（SCL）
//              D1   P1^3（SDA）
//              RES  接P12
//              DC   接P11
//              CS   接P10               
#include "REG51.h"
#include "oled.h"
#include "bmp.h"

 int main(void)
 {	u8 t;
		OLED_Init();			//初始化OLED  
		t=' ';
	while(1) 
	{		
		LED6=0;
		OLED_Clear();

		OLED_ShowString(0,2,"0.96' OLED TEST");
	 	OLED_ShowString(20,4,"2014/05/01");  
		OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		OLED_ShowChar(48,6,t);//显示ASCII字符	   
		t++;
		if(t>'~')t=' ';
		OLED_ShowNum(103,6,t,3,16);//显示ASCII字符的码值 	
			
		LED6=1;
		delay_ms(500);
		OLED_Clear();
		LED6=0;
		delay_ms(500);
		OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示(图片显示慎用，生成的字表较大，会占用较多空间，FLASH空间8K以下慎用)
		delay_ms(500);
		LED6=1;
		OLED_DrawBMP(0,0,128,8,BMP2);
		delay_ms(500);
	}	  
	
}

