#include<seven_seg.h>


void number(int n)
{
	if(n==0){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==1){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==2){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==3){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,1);
	}
	else if(n==4){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==5){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==6){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==7){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==8){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
	else if(n==9){
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_6,0);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7,1);
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
	}
}
