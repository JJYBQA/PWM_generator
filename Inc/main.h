/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define K_LEFT_Pin GPIO_PIN_13
#define K_LEFT_GPIO_Port GPIOC
#define K_LEFT_EXTI_IRQn EXTI4_15_IRQn
#define K_RIGHT_Pin GPIO_PIN_14
#define K_RIGHT_GPIO_Port GPIOC
#define K_RIGHT_EXTI_IRQn EXTI4_15_IRQn
#define K_DOWN_Pin GPIO_PIN_15
#define K_DOWN_GPIO_Port GPIOC
#define K_DOWN_EXTI_IRQn EXTI4_15_IRQn
#define RGB_Pin GPIO_PIN_2
#define RGB_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_10
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_11
#define SDA_GPIO_Port GPIOB
#define A8_Pin GPIO_PIN_8
#define A8_GPIO_Port GPIOA
#define A9_Pin GPIO_PIN_9
#define A9_GPIO_Port GPIOA
#define A10_Pin GPIO_PIN_10
#define A10_GPIO_Port GPIOA
#define A11_Pin GPIO_PIN_11
#define A11_GPIO_Port GPIOA
#define PH_A_Pin GPIO_PIN_6
#define PH_A_GPIO_Port GPIOF
#define PH_A_EXTI_IRQn EXTI4_15_IRQn
#define PH_B_Pin GPIO_PIN_7
#define PH_B_GPIO_Port GPIOF
#define PH_B_EXTI_IRQn EXTI4_15_IRQn
#define K_UP_Pin GPIO_PIN_3
#define K_UP_GPIO_Port GPIOB
#define K_UP_EXTI_IRQn EXTI2_3_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
