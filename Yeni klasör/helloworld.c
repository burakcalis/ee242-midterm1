

#include "STM32F4xx.h"
void SystemInit()
{
	(*((int*)0xE000ED88))|=0x0F00000;  			
	
	RCC->AHB1ENR |= 0x00000009;        			
	GPIOD->MODER = 0x50000001;         			
	GPIOD->OSPEEDR= 0xFFFFFFFF;        			
	GPIOA->OSPEEDR= 0xFFFFFFFF;        			
	GPIOA->PUPDR = 0x00000000;				
} 
void delayy(){ 							
	int delay0 = 0x000FFFFF;
	while (delay0--){   					
		}
}

int main()
{
	while(1){						
		
		while((GPIOA->IDR & 0x00000001)== 1) 		
		{
		   GPIOD->ODR= 0x00000000;     					
		}
		GPIOD->ODR= 0x0000C001;     			
		delayy();
		GPIOD->ODR= 0x00000000;    			
	}
} 
