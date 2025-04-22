/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RCC_OSC32_IN_Pin GPIO_PIN_14
#define RCC_OSC32_IN_GPIO_Port GPIOC
#define RCC_OSC32_OUT_Pin GPIO_PIN_15
#define RCC_OSC32_OUT_GPIO_Port GPIOC
#define RCC_OSC_IN_Pin GPIO_PIN_0
#define RCC_OSC_IN_GPIO_Port GPIOF
#define RCC_OSC_OUT_Pin GPIO_PIN_1
#define RCC_OSC_OUT_GPIO_Port GPIOF
#define EMERGENCY_Pin GPIO_PIN_0
#define EMERGENCY_GPIO_Port GPIOC
#define JOY_X_AXIS_Pin GPIO_PIN_1
#define JOY_X_AXIS_GPIO_Port GPIOC
#define JOY_Y_AXIS_Pin GPIO_PIN_2
#define JOY_Y_AXIS_GPIO_Port GPIOC
#define JOY_BUTTON_Pin GPIO_PIN_3
#define JOY_BUTTON_GPIO_Port GPIOC
#define LPUART1_TX_Pin GPIO_PIN_2
#define LPUART1_TX_GPIO_Port GPIOA
#define LPUART1_RX_Pin GPIO_PIN_3
#define LPUART1_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define QEI_1_A_Pin GPIO_PIN_6
#define QEI_1_A_GPIO_Port GPIOA
#define QEI_1_B_Pin GPIO_PIN_7
#define QEI_1_B_GPIO_Port GPIOA
#define QEI_1_X_Pin GPIO_PIN_4
#define QEI_1_X_GPIO_Port GPIOC
#define Prismatic_right_limit_Pin GPIO_PIN_11
#define Prismatic_right_limit_GPIO_Port GPIOB
#define Prismatic_right_limit_EXTI_IRQn EXTI15_10_IRQn
#define Prismatic_left_limit_Pin GPIO_PIN_12
#define Prismatic_left_limit_GPIO_Port GPIOB
#define Prismatic_left_limit_EXTI_IRQn EXTI15_10_IRQn
#define step_one_plotter_Pin GPIO_PIN_13
#define step_one_plotter_GPIO_Port GPIOB
#define step_one_plotter_EXTI_IRQn EXTI15_10_IRQn
#define step_two_plotter_Pin GPIO_PIN_14
#define step_two_plotter_GPIO_Port GPIOB
#define step_two_plotter_EXTI_IRQn EXTI15_10_IRQn
#define DIR_Driver_1_Pin GPIO_PIN_6
#define DIR_Driver_1_GPIO_Port GPIOC
#define Dir_Driver_2_Pin GPIO_PIN_7
#define Dir_Driver_2_GPIO_Port GPIOC
#define Servo_PWM_Pin GPIO_PIN_8
#define Servo_PWM_GPIO_Port GPIOA
#define Motor_1_PWM_Pin GPIO_PIN_9
#define Motor_1_PWM_GPIO_Port GPIOA
#define Motor_2_PWM_Pin GPIO_PIN_10
#define Motor_2_PWM_GPIO_Port GPIOA
#define T_SWDIO_Pin GPIO_PIN_13
#define T_SWDIO_GPIO_Port GPIOA
#define T_SWCLK_Pin GPIO_PIN_14
#define T_SWCLK_GPIO_Port GPIOA
#define T_SWO_Pin GPIO_PIN_3
#define T_SWO_GPIO_Port GPIOB
#define QEI_2_A_Pin GPIO_PIN_6
#define QEI_2_A_GPIO_Port GPIOB
#define QEI_2_B_Pin GPIO_PIN_7
#define QEI_2_B_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
