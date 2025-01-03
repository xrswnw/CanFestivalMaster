#include "AnyID_CanFestival_Tim_HL.h"

void Tim_InitInterface()
{
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure = {0};
	NVIC_InitTypeDef NVIC_InitStructure = {0};
	
	//CK_CNT_OV = CK_PSC / (PSC + 1) / (ARR + 1),			分频，canfestival最小時間單位是1us,若计时基数更改，需到timescfg更改对应宏定义
	TIM_TimeBaseStructure.TIM_Period = TIM_PSE_CNT; 					//此值在此，越小，进入中断越频繁，当然最大值亦满足日常需求
	TIM_TimeBaseStructure.TIM_Prescaler = TIM_PSE_SYS_FREQ;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseStructure.TIM_RepetitionCounter = 0;
	TIM_TimeBaseInit(TIM_PORT, &TIM_TimeBaseStructure);
	TIM_Cmd(TIM_PORT, ENABLE);
	TIM_ITConfig(TIM_PORT,TIM_IT_Update,ENABLE);
	TIM_ClearITPendingBit(TIM_PORT, TIM_IT_Update);
	
	NVIC_InitStructure.NVIC_IRQChannel = TIM1_UP_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
	

}

/*更新当前Tick*/
void setTimer(TIMEVAL value)
{
	TIM_PORT->ARR =  value;			//更新重装载值，此定时器调度专用！！！！！！！！！！！！！！！！！
}

/*获取当前Tick*/
TIMEVAL getElapsedTime(void)
{
	return TIM_PORT->CNT;
}

/*CanFestival调度*/
void TIM1_UP_IRQHandler(void) 
{
    if(TIM_GetITStatus(TIM_PORT, TIM_IT_Update)!= RESET)
    {
        TIM_ClearITPendingBit(TIM_PORT, TIM_IT_Update);
		TimeDispatch();					
    }
}
