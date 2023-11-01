#include "lpc213x.h"
#include "oled.h"

int main(void)
{
	init_sys();
	OLED_Init();
	OLED_Clear();
	unsigned char t;
	t=' ';
	while(1)
	{
		OLED_ShowCHinese(11,0,0);//电
		OLED_ShowCHinese(29,0,1);//子
		OLED_ShowCHinese(47,0,2);//科
		OLED_ShowCHinese(65,0,3);//技
		OLED_ShowCHinese(83,0,4);//大
		OLED_ShowCHinese(101,0,5);//学
		OLED_ShowCHinese(45,2,6);//田
		OLED_ShowCHinese(65,2,7);//岩
		OLED_ShowString(2,4,"0.96' OLED TEST");
	//	OLED_ShowString(8,2,"ZHONGJINGYUAN");  
	 	OLED_ShowString(20,6,"2023/11/01");  
		/*OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		OLED_ShowChar(48,6,t);//显示ASCII字符	   
		t++;
		if(t>'~')t=' ';
		OLED_ShowNum(103,6,t,3,16);//显示ASCII字符的码值 	

		delay_ms(500);
		OLED_Clear();

		delay_ms(500);*/

	}
	
	return 0;
}