//
// Created by JiangYC on 2024/10/2.
//
#include"main.h"
#include"tim.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
  if(htim->Instance == htim1.Instance){
    // HAL_GPIO_TogglePin(Red_GPIO_Port, Red_Pin);
    HAL_GPIO_TogglePin(Green_GPIO_Port, Green_Pin);
  }
  if(htim == &htim2) {
    HAL_GPIO_TogglePin(Red_GPIO_Port, Red_Pin);
  }
}